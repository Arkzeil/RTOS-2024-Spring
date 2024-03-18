/*
*********************************************************************************************************
*                                                uC/OS-II
*                                          The Real-Time Kernel
*
*                           (c) Copyright 1992-2002, Jean J. Labrosse, Weston, FL
*                                           All Rights Reserved
*
*                                               EXAMPLE #1
*********************************************************************************************************
*/

#include "includes.h"

/*
*********************************************************************************************************
*                                               CONSTANTS
*********************************************************************************************************
*/

#define  TASK_STK_SIZE                 512       /* Size of each task's stacks (# of WORDs)            */
#define  N_TASKS                         2       /* Number of identical tasks                          */
/*Added Code for Lab1*/
#define  MAX_BUF_SIZE                   60      /* Maximum buffer size for the context switch buffer*/
#define  MAX_BUF_AMOUNT                 10       /* Maximum buffer amount for the context switch buffer*/
#define  MAX_TASKS                       10       /* Maximum number of tasks*/
#define MSG_QUEUE_SIZE 20

typedef struct task_property{
    int   c;          /* computation time*/
    int   p;          /* period*/
}task_prop;
/*end*/
/*
*********************************************************************************************************
*                                               VARIABLES
*********************************************************************************************************
*/
OS_STK        TaskStk[N_TASKS][TASK_STK_SIZE];        /* Tasks stacks                                  */
OS_STK        TaskStartStk[TASK_STK_SIZE];
char          TaskData[N_TASKS];                      /* Parameters to pass to each task               */
OS_EVENT     *RandomSem;

/*Added codes for Lab1*/
char CxtSwBuf[MAX_BUF_AMOUNT][MAX_BUF_SIZE];        /* Counter for the context switch               */
int CxtSwBufIndex = 0;                              /* Index for the context switch buffer               */
//task_prop taskList[MAX_TASKS];                     /* List of tasks*/

/*End*/

/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/

        void  Task(void *data);                       /* Function prototypes of tasks                  */
        void  TaskStart(void *data);                  /* Function prototypes of Startup task           */
static  void  TaskStartCreateTasks(void);

/*Added Function for Lab1*/
void    PrintBuffer(void);
/*end*/

/*$PAGE*/
/*
*********************************************************************************************************
*                                                MAIN
*********************************************************************************************************
*/

void  main (void)
{
    PC_DispClrScr(DISP_FGND_WHITE + DISP_BGND_BLACK);      /* Clear the screen                         */

    OSInit();                                              /* Initialize uC/OS-II                      */

    PC_DOSSaveReturn();                                    /* Save environment to return to DOS        */
    PC_VectSet(uCOS, OSCtxSw);                             /* Install uC/OS-II's context switch vector */

    //RandomSem   = OSSemCreate(1);                          /* Random number semaphore                  */

    OSTaskCreate(TaskStart, (void *)0, &TaskStartStk[TASK_STK_SIZE - 1], 0);
    OSStart();                                             /* Start multitasking                       */
}


/*
*********************************************************************************************************
*                                              STARTUP TASK
*********************************************************************************************************
*/
void  TaskStart (void *pdata)
{
#if OS_CRITICAL_METHOD == 3                                /* Allocate storage for CPU status register */
    OS_CPU_SR  cpu_sr;
#endif
    //char       s[100];
    INT16S     key;


    pdata = pdata;                                         /* Prevent compiler warning                 */

    //TaskStartDispInit();                                   /* Initialize the display                   */

    OS_ENTER_CRITICAL();
    PC_VectSet(0x08, OSTickISR);                           /* Install uC/OS-II's clock tick ISR        */
    PC_SetTickRate(OS_TICKS_PER_SEC);                      /* Reprogram tick rate                      */
    OS_EXIT_CRITICAL();

    OSStatInit();                                          /* Initialize uC/OS-II's statistics         */

    //OSTimeSet(0);

    TaskStartCreateTasks();                                /* Create all the application tasks         */

    for (;;) {
        //TaskStartDisp();                                  /* Update the display                       */

        //PrintBuffer();

        if (PC_GetKey(&key) == TRUE) {                     /* See if key has been pressed              */
            if (key == 0x1B) {                             /* Yes, see if it's the ESCAPE key          */
                PC_DOSReturn();                            /* Return to DOS                            */
            }
        }

        OSCtxSwCtr = 0;                                    /* Clear context switch counter             */
        //OSTimeDly(200);
        OSTimeDlyHMSM(0, 0, 1, 0); /* Wait one second                          */
    }
}

/*
*********************************************************************************************************
*                                             CREATE TASKS
*********************************************************************************************************
*/

static  void  TaskStartCreateTasks (void)
{
    INT8U  i;

    task_prop *t1 = malloc(sizeof(task_prop));
    task_prop *t2 = malloc(sizeof(task_prop));
    //task_prop *t3 = malloc(sizeof(task_prop));

    //t1->c = 1 * 19;
    t1->c = 1;
    t1->p = 3;

    //t2->c = 3 * 19;
    t2->c = 3;
    t2->p = 6;

    /*t3->c = 4;
    t3->p = 9;*/

    OSTaskCreate(Task, (void *)t1, &TaskStk[0][TASK_STK_SIZE - 1], 1);
    OSTaskCreate(Task, (void *)t2, &TaskStk[1][TASK_STK_SIZE - 1], 2);
    //OSTaskCreate(Task, (void *)t3, &TaskStk[2][TASK_STK_SIZE - 1], 3);
}

/*
*********************************************************************************************************
*                                                  TASKS
*********************************************************************************************************
*/

void Task(void *pdata)
{
    int start ; //the start time
    int end ; //the end time
    int toDelay;

    task_prop* t = (task_prop*)pdata;

    OS_ENTER_CRITICAL();
    OSTCBCur->period = t->p;
    OSTCBCur->compTime = t->c;
    OS_EXIT_CRITICAL();

    start=OSTimeGet();
    
    while(1)
    {
        while(OSTCBCur->compTime > 0) //C ticks
        {

        // do nothing

        }
        end=OSTimeGet() ; // end time
        toDelay=(OSTCBCur->period)-(end-start) ;

        start = start + (OSTCBCur->period); // next start time
        OS_ENTER_CRITICAL();
        OSTCBCur->compTime = t->c; // reset the counter (c ticks for computation)
        OS_EXIT_CRITICAL();

        if(toDelay<0)
        {
            PC_DispStr(0, 0, "Deadline\n", DISP_FGND_BLACK + DISP_BGND_LIGHT_GRAY);;
        }
        else{
            OSTimeDly (toDelay); // delay and wait (P-C) times
        }
    }
}

void PrintBuffer(void){
    static int i = 0;
    for(; i <  CxtSwBufIndex; i++){
        printf("%s\n", CxtSwBuf[i]);
    }

    if(i > MAX_BUF_AMOUNT){
        while(1){

        }
    }
    //CxtSwBufIndex = 0;
    return;
}
