/*
*********************************************************************************************************
*                                                uC/OS-II
*                                          The Real-Time Kernel
*
*                          (c) Copyright 1992-2002, Jean J. Labrosse, Weston, FL
*                                           All Rights Reserved
*
*                                               EXAMPLE #3
*********************************************************************************************************
*/

#include "includes.h"
#include "stdio.h"
/*
*********************************************************************************************************
*                                              CONSTANTS
*********************************************************************************************************
*/

#define TASK_STK_SIZE 512 /* Size of each task's stacks (# of WORDs)       */

#define TASK_START_ID 0 /* Application tasks                             */

#define MSG_QUEUE_SIZE 20 /* Size of message queue used in example         */

#ifndef MAX_BUF_AMOUNT
#define MAX_BUF_AMOUNT 300
#endif

#define NUM_TASK 5

#define TEST_SET_ID 1
/*
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*/

// typedef struct {
//     char    TaskName[30];
//     INT16U  TaskCtr;
//     INT16U  TaskExecTime;
//     INT32U  TaskTotExecTime;
// } TASK_USER_DATA;

typedef struct
{
    int compTime;
    int period;
} TASK_INFO;

/*
*********************************************************************************************************
*                                              VARIABLES
*********************************************************************************************************
*/

OS_STK TaskStartStk[TASK_STK_SIZE];      /* Startup    task stack                         */
OS_STK TaskStk[NUM_TASK][TASK_STK_SIZE]; /* Task stacks                                   */

// TASK_USER_DATA  TaskUserData[7];

char CxtSwBuf[MAX_BUF_AMOUNT][50];
int CxtSwBufIndex = 0;
TASK_INFO task_info[NUM_TASK];

/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/

void TaskStart(void *data); /* Function prototypes of tasks                  */
static void TaskStartCreateTasks(void);
// static void TaskStartDispInit(void);
// static void TaskStartDisp(void);
void Task(void *data);
// void DispTaskStat(INT8U id);
void PrintBuffer();

/*$PAGE*/
/*
*********************************************************************************************************
*                                                  MAIN
*********************************************************************************************************
*/

void main(void) {
    //    PC_DispClrScr(DISP_BGND_BLACK); /* Clear the screen                         */

    OSInit(); /* Initialize uC/OS-II                      */

    // L2
    OSTCBPrioTbl[OS_TASK_IDLE_PRIO]->deadline = 1002;

    //    PC_DOSSaveReturn(); /* Save environment to return to DOS        */

    //    PC_VectSet(uCOS, OSCtxSw); /* Install uC/OS-II's context switch vector */

    //    PC_ElapsedInit(); /* Initialized elapsed time measurement     */

    //    OSTaskCreate(TaskStart, (void *)0, &TaskStartStk[TASK_STK_SIZE - 1], 0);

    TaskStartCreateTasks();

    OSStart(); /* Start multitasking                       */
}

/*$PAGE*/
/*
*********************************************************************************************************
*                                               STARTUP TASK
*********************************************************************************************************
*/

// void TaskStart(void *pdata)
//{
// #if OS_CRITICAL_METHOD == 3 /* Allocate storage for CPU status register */
//     OS_CPU_SR cpu_sr;
// #endif
//     INT16S key;
//
//     pdata = pdata; /* Prevent compiler warning                 */
//
//     // TaskStartDispInit(); /* Setup the display                        */
//
////    OS_ENTER_CRITICAL(); /* Install uC/OS-II's clock tick ISR        */
////    PC_VectSet(0x08, OSTickISR);
////    PC_SetTickRate(OS_TICKS_PER_SEC); /* Reprogram tick rate                      */
////    OS_EXIT_CRITICAL();
//
////    OSStatInit(); /* Initialize uC/OS-II's statistics         */
//
////    MsgQueue = OSQCreate(&MsgQueueTbl[0], MSG_QUEUE_SIZE); /* Create a message queue                   */
//
////    OSTimeSet(0);
//
//    printf("TaskStart OSTime: %d\n ", OSTimeGet());
//
//    TaskStartCreateTasks(); /* Create all the application tasks         */
//
//    for (;;)
//    {
//        // TaskStartDisp(); /* Update the display                       */
//
//        PrintBuffer(); /* Print the log of context switch */
//
////        if (PC_GetKey(&key))
////        { /* See if key has been pressed              */
////            if (key == 0x1B)
////            {                   /* Yes, see if it's the ESCAPE key          */
////                PC_DOSReturn(); /* Yes, return to DOS                       */
////            }
////        }
//
//        OSCtxSwCtr = 0;              /* Clear the context switch counter         */
////        OSTimeDly(300); /* Wait one second                          */
//    }
//}
/*$PAGE*/
/*
*********************************************************************************************************
*                                      CREATE APPLICATION TASKS
*********************************************************************************************************
*/

// L2
static void TaskStartCreateTasks(void) {
    task_info[1].compTime = 1;
    task_info[1].period = 3;

    task_info[2].compTime = 3;
    task_info[2].period = 5;

    printf("OSTime: %d\n ", OSTimeGet());

    OSTaskCreate(Task, (void *)&task_info[1], &TaskStk[1][TASK_STK_SIZE - 1], (INT8U)1);
    OSTaskCreate(Task, (void *)&task_info[2], &TaskStk[2][TASK_STK_SIZE - 1], (INT8U)2);

    TaskArgumentSetting(task_info);
}

// static void TaskStartCreateTasks(void) {
//     task_info[0].compTime = 1;
//     task_info[0].period = 4;
//
//     task_info[1].compTime = 2;
//     task_info[1].period = 5;
//
//     task_info[2].compTime = 2;
//     task_info[2].period = 10;
//
//     printf("OSTime: %d\n ", OSTimeGet());
//
//     OSTaskCreate(Task, (void *)&task_info[0], &TaskStk[0][TASK_STK_SIZE - 1], (INT8U)1);
//     OSTaskCreate(Task, (void *)&task_info[1], &TaskStk[1][TASK_STK_SIZE - 1], (INT8U)2);
//     OSTaskCreate(Task, (void *)&task_info[2], &TaskStk[2][TASK_STK_SIZE - 1], (INT8U)3);
//
//     TaskArgumentSetting(task_info);
// }

/*$PAGE*/

/*$PAGE*/
/*
*********************************************************************************************************
*                                               TASK
*********************************************************************************************************
*/

void Task(void *pdata) {
#if OS_CRITICAL_METHOD == 3 /* Allocate storage for CPU status register     */
    OS_CPU_SR cpu_sr = 0;
#endif
    char *msg;
    INT8U err;

    int start;
    int end;
    int toDelay;

    TASK_INFO *taskInfo = (TASK_INFO *)pdata;

    OS_ENTER_CRITICAL();
    OSTCBCur->compTime = taskInfo->compTime;
    OSTCBCur->period = taskInfo->period;
    OS_EXIT_CRITICAL();

    start = OSTimeGet();
    printf("OSTCBCur->OSTCBPrio: %d\n", (int)OSTCBCur->OSTCBPrio);

    for (;;) {

        PrintBuffer(); /* Print the log of context switch */
        while (OSTCBCur->compTime > 0) {
            /* Computing */
        }

        OS_ENTER_CRITICAL();

        end = OSTimeGet();
        toDelay = (OSTCBCur->period) - (end - start);

        if (toDelay < 0) {
            sprintf(&CxtSwBuf[CxtSwBufIndex++], "%5d\t Task%d, %d exceed the deadline.\n", ((int)(start / OSTCBCur->period) + 1) * OSTCBCur->period, (int)OSTCBCur->OSTCBPrio, (int)start);
        }

        OSTCBCur->compTime = taskInfo->compTime; // Reset the counter
        start = start + (OSTCBCur->period);      // Next start time
        OSTCBCur->deadline = start + OSTCBCur->period;

        OS_EXIT_CRITICAL();

        OSTimeDly(toDelay);
    }
}

void TaskArgumentSetting(TASK_INFO *task_info) {
    OS_TCB *ptcb;
    ptcb = OSTCBList;
    while (ptcb->OSTCBPrio == 0 || ptcb->OSTCBPrio == 1 || ptcb->OSTCBPrio == 2 || ptcb->OSTCBPrio == 3) {

        if (ptcb->OSTCBPrio == 1) {
            ptcb->compTime = task_info[1].compTime;
            ptcb->period = task_info[1].period;
            ptcb->deadline = task_info[1].period;
        } else if (ptcb->OSTCBPrio == 2) {
            ptcb->compTime = task_info[2].compTime;
            ptcb->period = task_info[2].period;
            ptcb->deadline = task_info[2].period;
        }
        //        else if (ptcb->OSTCBPrio == 3)
        //        {
        //            ptcb->compTime = task_info[3].compTime;
        //            ptcb->period = task_info[3].period;
        //            ptcb->deadline = task_info[3].period;
        //        }
        ptcb = ptcb->OSTCBNext;
    }
}

void PrintBuffer() {
    static int i = 0;

    for (; i < CxtSwBufIndex; i++)
        printf("%s", CxtSwBuf[i]);

    if (i > MAX_BUF_AMOUNT)
        while (1)
            ;
}