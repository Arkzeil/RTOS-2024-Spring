/*
 * FreeRTOS V202107.00
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://www.FreeRTOS.org
 * http://aws.amazon.com/freertos
 *
 * 1 tab == 4 spaces!
 */

/******************************************************************************
 * NOTE 1:  This project provides two demo applications.  A simple blinky
 * style project, and a more comprehensive test and demo application.  The
 * mainCREATE_SIMPLE_BLINKY_DEMO_ONLY setting in main.c is used to select
 * between the two.  See the notes on using mainCREATE_SIMPLE_BLINKY_DEMO_ONLY
 * in main.c.  This file implements the simply blinky style version.
 *
 * NOTE 2:  This file only contains the source code that is specific to the
 * basic demo.  Generic functions, such FreeRTOS hook functions, and functions
 * required to configure the hardware are defined in main.c.
 ******************************************************************************
 *
 * main_blinky() creates one queue, and two tasks.  It then starts the
 * scheduler.
 *
 * The Queue Send Task:
 * The queue send task is implemented by the prvQueueSendTask() function in
 * this file.  prvQueueSendTask() sits in a loop that causes it to repeatedly
 * block for 200 milliseconds, before sending the value 100 to the queue that
 * was created within main_blinky().  Once the value is sent, the task loops
 * back around to block for another 200 milliseconds...and so on.
 *
 * The Queue Receive Task:
 * The queue receive task is implemented by the prvQueueReceiveTask() function
 * in this file.  prvQueueReceiveTask() sits in a loop where it repeatedly
 * blocks on attempts to read data from the queue that was created within
 * main_blinky().  When data is received, the task checks the value of the
 * data, and if the value equals the expected 100, toggles an LED.  The 'block
 * time' parameter passed to the queue receive function specifies that the
 * task should be held in the Blocked state indefinitely to wait for data to
 * be available on the queue.  The queue receive task will only leave the
 * Blocked state when the queue send task writes to the queue.  As the queue
 * send task writes to the queue every 200 milliseconds, the queue receive
 * task leaves the Blocked state every 200 milliseconds, and therefore toggles
 * the LED every 200 milliseconds.
 */

/* Kernel includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "list.h"
#include <stdio.h>

/* Standard demo includes. */
#include "partest.h"

/* Priorities at which the tasks are created. */
#define mainQUEUE_RECEIVE_TASK_PRIORITY		( tskIDLE_PRIORITY + 2 )
#define	mainQUEUE_SEND_TASK_PRIORITY		( tskIDLE_PRIORITY + 1 )

/* The rate at which data is sent to the queue.  The 200ms value is converted
to ticks using the portTICK_PERIOD_MS constant. */
#define mainQUEUE_SEND_FREQUENCY_MS			( pdMS_TO_TICKS( 200 ) )

/* The number of items the queue can hold.  This is 1 as the receive task
will remove items as they are added, meaning the send task should always find
the queue empty. */
#define mainQUEUE_LENGTH					( 1 )

/* The LED toggled by the Rx task. */
#define mainTASK_LED						( 0 )

/*-----------------------------------------------------------*/

/*
 * Called by main when mainCREATE_SIMPLE_BLINKY_DEMO_ONLY is set to 1 in
 * main.c.
 */
void main_blinky( void );

/*
 * The tasks as described in the comments at the top of this file.
 */
//static void prvQueueReceiveTask( void *pvParameters );
//static void prvQueueSendTask( void *pvParameters );

/*-----------------------------------------------------------*/

/* The queue used by both tasks. */
//static QueueHandle_t xQueue = NULL;

/*-----------------------------------------------------------*/

void Task1( void *pvParameters );
void Task2( void *pvParameters );

void PrintBuffer();


void main_blinky( void )
{
	/* Create the queue. */
//	xQueue = xQueueCreate( mainQUEUE_LENGTH, sizeof( uint32_t ) );

//	if( xQueue != NULL )
//	{
		/* Start the two tasks as described in the comments at the top of this
		file. */
//		xTaskCreate( prvQueueReceiveTask,				/* The function that implements the task. */
//					"Rx", 								/* The text name assigned to the task - for debug only as it is not used by the kernel. */
//					configMINIMAL_STACK_SIZE, 			/* The size of the stack to allocate to the task. */
//					NULL, 								/* The parameter passed to the task - not used in this case. */
//					mainQUEUE_RECEIVE_TASK_PRIORITY, 	/* The priority assigned to the task. */
//					NULL );								/* The task handle is not required, so NULL is passed. */
//
//		xTaskCreate( prvQueueSendTask, "TX", configMINIMAL_STACK_SIZE, NULL, mainQUEUE_SEND_TASK_PRIORITY, NULL );

        task_info[0].compTime = 1;
        task_info[0].period = 3;

        task_info[1].compTime = 3;
        task_info[1].period = 5;

        //
        //    task_info[0].compTime = 1;
        //    task_info[0].period = 4;
        //
        //    task_info[1].compTime = 2;
        //    task_info[1].period = 5;
        //
        //    task_info[2].compTime = 2;
        //    task_info[2].period = 10;

        xTaskCreate( Task2, "Task2", configMINIMAL_STACK_SIZE, (void *)&task_info[1], 2, NULL );
	    xTaskCreate( Task1, "Task1", configMINIMAL_STACK_SIZE, (void *)&task_info[0], 1, NULL );
	    printf("after create\n");
		/* Start the tasks and timer running. */
		vTaskStartScheduler();
//	}

	/* If all is well, the scheduler will now be running, and the following
	line will never be reached.  If the following line does execute, then
	there was insufficient FreeRTOS heap memory available for the Idle and/or
	timer tasks to be created.  See the memory management section on the
	FreeRTOS web site for more details on the FreeRTOS heap
	http://www.freertos.org/a00111.html. */
	for( ;; );
}




void Task1( void *pvParameters )
{
    /* Remove compiler warning about unused parameter. */
    ( void ) pvParameters;

    int start;
    int end;
    int toDelay;

    TASK_INFO *taskInfo = (TASK_INFO *)pvParameters;

    taskENTER_CRITICAL();
    setTCB(taskInfo->compTime, taskInfo->period);
    taskEXIT_CRITICAL();

    start = xTaskGetTickCount();

    /* Initialise xNextWakeTime - this only needs to be done once. */
//    xNextWakeTime = xTaskGetTickCount();

    for( ;; )
    {
        PrintBuffer(); // T1

        while (getC() > 0) {
            /* Computing */
        }
        end = xTaskGetTickCount();
        int p = getP();
        toDelay = p - (end - start);

        taskENTER_CRITICAL();

        start = start + p;      // Next start time
        setC(taskInfo->compTime); // Reset the counter
        setD(start + p);

        taskEXIT_CRITICAL();

//        if (toDelay < 0) {
//            sprintf(&CxtSwBuf[CxtSwBufIndex++], "%5d\t Task%d exceed the deadline.\n",
//                    ((int)(start / getP()) + 1) * getP(), getPri());
//        }
        //printf("%d 1 complete \n", xTaskGetTickCount());

       sprintf(&CxtSwBuf[CxtSwBufIndex++], "%d C %d %d\n", (int)end, (int)1, (int)2);

        vTaskDelay(toDelay);

    }
}


void Task2( void *pvParameters )
{

    /* Remove compiler warning about unused parameter. */
    ( void ) pvParameters;

    int start;
    int end;
    int toDelay;

    TASK_INFO *taskInfo = (TASK_INFO *)pvParameters;

    taskENTER_CRITICAL();
    setTCB(taskInfo->compTime, taskInfo->period);
    taskEXIT_CRITICAL();

    start = xTaskGetTickCount();

    /* Initialise xNextWakeTime - this only needs to be done once. */
//    xNextWakeTime = xTaskGetTickCount();

    for( ;; )
    {
        PrintBuffer(); // T2

            while (getC() > 0) {
                /* Computing */
            }
            end = xTaskGetTickCount();

            int p = getP();
            toDelay = p - (end - start);

            taskENTER_CRITICAL();

            start = start + p;      // Next start time
            setC(taskInfo->compTime); // Reset the counter
            setD(start + p);

            taskEXIT_CRITICAL();

//            if (toDelay < 0) {
//                sprintf(&CxtSwBuf[CxtSwBufIndex++], "%5d\t Task%d exceed the deadline.\n",
//                        ((int)(start / getP()) + 1) * getP(), getPri());
//            }

            sprintf(&CxtSwBuf[CxtSwBufIndex++], "%d C %d %d\n",
                        (int)end, (int)1, (int)2);
            vTaskDelay(toDelay);

    }
}
/*-----------------------------------------------------------*/

void PrintBuffer() {
    static int i = 0;

    for (; i < CxtSwBufIndex; i++)
        printf("%s", CxtSwBuf[i]);

    if (i > MAX_BUF_AMOUNT) {
        printf("out\n");
    }

}
/*-----------------------------------------------------------*/
/*-----------------------------------------------------------*/

