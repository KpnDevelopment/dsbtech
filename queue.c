#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
void main()
{
int choice;
while(1)
{
  printf("\n 1.insert element \n2.delete element \n3.display elements \n4.EXIT \n Enter your choice\n");
  scanf("%d",&choice);
  switch(choice)
{
  case 1:
  {
   insert();
   break;
   }
   case 2:
   {
    delete();
    break;
    }
   case 3:
   {
    display();
    break;
    }
   case 4:
   {
     exit(1);
     }
   default :
   {
     printf("wrong choice\n");
     }
    }
   }
  }
void insert()
{
  int x;
  if(rear==MAX-1)
   printf ("queue overflow");
   else
   {
   if (front==-1)
       front=0;
       printf("Enter element");
       scanf("%d",&x);
       rear=rear+1;
       queue_array[rear]=x;
  }
 }
void delete()
{
 if(front==-1||front>rear)
 {
 printf("queue underflow");
 return;
 
}
else
{
  printf("Element deleted from queue is :%d",queue_array[front]);
  front++;
  }
}
 
 void display()
 {
   int i;
   if(front==1)
    printf("queue is empty");
   else
   {
   printf("queue is :\n");
   for(i=front;i<=rear;i++)
   printf("%d ",queue_array[i]);
   printf("\n");
   }
   }