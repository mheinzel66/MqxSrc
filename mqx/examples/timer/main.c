/**HEADER********************************************************************
* 
* Copyright (c) 2008 Freescale Semiconductor;
* All Rights Reserved                       
*
* Copyright (c) 1989-2008 ARC International;
* All Rights Reserved
*
*************************************************************************** 
*
* THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESSED OR 
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES 
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  
* IN NO EVENT SHALL FREESCALE OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, 
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING 
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
* THE POSSIBILITY OF SUCH DAMAGE.
*
**************************************************************************
*
* $FileName: main.c$
* $Version : 3.8.12.0$
* $Date    : Oct-4-2011$
*
* Comments:
*
*   This file contains the source for the timer example program.
*
*END************************************************************************/

#include <mqx.h>
#include <bsp.h>
#include <fio.h>
#include <timer.h>


#if ! BSPCFG_ENABLE_IO_SUBSYSTEM
#error This application requires BSPCFG_ENABLE_IO_SUBSYSTEM defined non-zero in user_config.h. Please recompile BSP with this option.
#endif


#ifndef BSP_DEFAULT_IO_CHANNEL_DEFINED
#error This application requires BSP_DEFAULT_IO_CHANNEL to be not NULL. Please set corresponding BSPCFG_ENABLE_TTYx to non-zero in user_config.h and recompile BSP with this option.
#endif


/*  This example calls _timer_create_component before it activates the
**  timers so that the application can specify the timer task stack size.
**  The stack size may need to be larger than the TIMER_DEFAULT_STACK_SIZE 
**  that is defined in timer.h, since the application's handler function uses 
**  this stack. In this example, the handlers are LED_on and LED_off, 
**  which have large stack requirements. You may need to increase the stack size
**  for your target hardware.
*/
#define TIMER_TASK_PRIORITY  2
#define TIMER_STACK_SIZE     2000

#define MAIN_TASK      10

extern void main_task(uint_32);


const TASK_TEMPLATE_STRUCT  MQX_template_list[] = 
{
   /* Task Index, Function,   Stack, Priority,  Name,     Attributes,          Param, Time Slice */
    { MAIN_TASK,  main_task,  2000,  8,         "Main",   MQX_AUTO_START_TASK, 0,     0 },
    { 0 }
};

/*FUNCTION*------------------------------------------------------
*
* Function Name  : LED_on
* Returned Value : none
* Comments       :
*     This timer function prints out "ON"
*END*-----------------------------------------------------------*/

static void LED_on
   (
      _timer_id id,
      pointer data_ptr,
      MQX_TICK_STRUCT_PTR tick_ptr
   )
{
   printf("ON\n");
}

/*FUNCTION*------------------------------------------------------
*
* Function Name  : LED_off
* Returned Value : none
* Comments       :
*     This timer function prints out "OFF"
*END*-----------------------------------------------------------*/

static void LED_off
   (
      _timer_id id,
      pointer data_ptr,
      MQX_TICK_STRUCT_PTR tick_ptr
   )
{
   printf("OFF\n");
}

/*TASK*----------------------------------------------------------
*
* Task Name : main_task
* Comments  : 
*     This task creates two timers, each of a period of 2 seconds,
*     the second timer offset by 1 second from the first.
*END*-----------------------------------------------------------*/

void main_task
   (
      uint_32 initial_data
   )
{
   MQX_TICK_STRUCT ticks;
   MQX_TICK_STRUCT dticks;
   _timer_id       on_timer;
   _timer_id       off_timer;
   uint_8          time = 6; // time in seconds 

   printf("\n\nTwo timers are created, each of a period of 2 seconds,\nthe second timer offset by 1 second from the first.\n");
   printf("Task runs for %d seconds,\nthen timers are closed and task finishes.\n\n", time);           

   /* 
   ** Create the timer component with more stack than the default
   ** in order to handle printf() requirements: 
   */
   _timer_create_component(TIMER_TASK_PRIORITY, TIMER_STACK_SIZE);

   _time_init_ticks(&dticks, 0);
   _time_add_sec_to_ticks(&dticks, 2);

   _time_get_elapsed_ticks(&ticks);
   _time_add_sec_to_ticks(&ticks, 1);
   on_timer = _timer_start_periodic_at_ticks(LED_on, 0, 
      TIMER_ELAPSED_TIME_MODE, &ticks, &dticks);
   _time_add_sec_to_ticks(&ticks, 1);
   off_timer = _timer_start_periodic_at_ticks(LED_off, 0, 
      TIMER_ELAPSED_TIME_MODE, &ticks, &dticks);

   _time_delay(time * 1000); // wait 6 seconds
   printf("\nThe task is finished!");

   _timer_cancel(on_timer);
   _timer_cancel(off_timer);

   _task_block();

}

/* EOF */
