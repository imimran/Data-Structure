#include <stdio.h>
struct Node
{
   int data;
   struct Node *next;
};
struct Node *head = NULL;

void insertAtBeginning(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL)
   {

      head = newNode;
   }
   else
   {
      newNode->next = head;
      head = newNode;
   }

}
void display()
{
   if(head == NULL)
   {
      printf("\nList is Empty\n");
   }
   else
   {
      struct Node *temp = head;
      printf("\n\nList elements are: \n");
      while(temp->next != NULL)
      {
       printf("%d ",temp->data);
       temp = temp->next;
        }
      printf("%d ",temp->data);
   }
}
void insertAtEnd(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL)
   head = newNode;
   else
   {
      struct Node *temp = head;
      while(temp->next != NULL){
       temp = temp->next;
      }
      temp->next = newNode;
   }

}
void removeBeginning()
{
   if(head == NULL)
   printf("\n\nList is Empty!!!");
   else
   {
      struct Node *temp = head;
      if(temp->next == NULL)
      {
       head = NULL;
       free(temp);
      }
      else
      {
      head = temp->next;
      free(temp);
      }
   }
}

void removeEnd()
{
   if(head == NULL)
   {
      printf("\nList is Empty!!!\n");
   }
   else
   {
      struct Node *temp1 = head,*temp2;
      if(temp1->next == NULL)
      {
       head = NULL;
      }
      else
      {
       while(temp1->next != NULL)
       {
          temp2 = temp1;
          temp1 = temp1->next;
       }
       temp2->next = NULL;
        }
          free(temp1);
    }
}

int main()
{
   insertAtEnd(5);
   insertAtEnd(10);
   insertAtBeginning(50);
   insertAtBeginning(100);
   display();
   removeBeginning();
   display();
   removeEnd();
   display();
    return 0;
}

