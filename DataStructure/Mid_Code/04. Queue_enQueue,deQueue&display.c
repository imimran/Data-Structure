#include<stdio.h>
#define SIZE 10

char queue[SIZE], back = -1, front = 0;

void enQueue(char value){
   if(back == SIZE-1)
      printf("\nQueue is Full!!!");
   else{
      back++;
      queue[back] = value;
   }
}
void deQueue(){
   if(back == -1)
      printf("\nQueue is Empty!!! ");
   else{
      printf("\n\nRemoved : %c", queue[front]);
      front++;
   }
}
void display(){
   if(back == -1)
      printf("\nQueue is Empty!!!");
   else{
      int i;
      printf("\n\nQueue elements are: \n\n");
      for(i=front; i<=back; i++)
      printf("%c\t",queue[i]);
   }
}

void main()
{

enQueue('u');
enQueue('n');
enQueue('i');
enQueue('v');
enQueue('e');
enQueue('r');
enQueue('s');
enQueue('i');
enQueue('t');
enQueue('y');
deQueue();
deQueue();
deQueue();
deQueue();
deQueue();
display();
}
