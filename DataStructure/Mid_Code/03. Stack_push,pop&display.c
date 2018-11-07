#include <stdio.h>

int stack[20];
int head = -1;

void push(int data){
head++;
stack[head] = data;
}

int pop(){
int data = stack[head];
head--;
return data;

}

void displaystack(){
    printf("Data in your stack\n");
    int i;
    for(i=0;i<=head;i++){
            printf("%d ",stack[i]);
    }

}

void main()
{
    push(10);
    push(20);
    push(30);
    displaystack();
    int data = pop();
    printf("\nyour pop data %d \n",data);
    displaystack();
}
