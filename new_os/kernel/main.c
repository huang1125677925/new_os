#include "print.h"
#include "init.h"
#include "debug.h"
#include "memory.h"
#include "interrupt.h"
#include "thread.h"
#include "console.h"

void thread_a(void*);
void thread_b(void*);

int main(void) {
   put_str("I am kernel\n");
   init_all();

   // thread_start("thread_a", 31, thread_a, "start thread a ");
   // thread_start("thread_b", 8, thread_b, "start thread b ");

   intr_enable(); //打开中断
   while(1); // {
   //    console_put_str("Main ");
   // }
   return 0;
}

void thread_a(void* arg) {
   char* para = arg;
   while (1)
   {  
      console_put_str(para);
   }
}

void thread_b(void* arg) {
   char* para = arg;
   while (1)
   {
      console_put_str(para);
   }
}
