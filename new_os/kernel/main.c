#include "print.h"
#include "init.h"
#include "debug.h"
#include "memory.h"
#include "thread.h"

void thread_a(void* arg);

int main(void) {
   put_str("I am kernel\n");
   init_all();

   thread_start("thread_a", 31, thread_a, "start thread a");
   // asm volatile ("sti");	
   while(1);
   return 0;
}

void thread_a(void* arg) {
   char* para = arg;
   while (1)
   {
      put_str(para);
      put_str("\n");
   }
   
}
