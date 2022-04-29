#include<stdio.h>
#include<stdbool.h>
#define MAX 5
int queue [MAX];
int front=0,rear=-1;
bool isfull()
{
if(rear-front==MAX-1)
{
return true;

}
else
{
return false;
}
}
bool isempty()
{
if(front<0||front>rear)
{
return true;
}
else
{
return false;
}
}
int peek()
{
if(!isempty())
{
printf("the element is %d\n",queue[front]);
}
else
{
printf("queue is empty\n");
return 0;
}
}
int enqueue()
{
int data;
printf("enter the element to insert : ");
scanf("%d",&data);
if(!isfull())
{
rear++;
queue[rear]=data;
}
else
{
printf("queue overflow\n");
return 0;
}
}
int dequeue()
{
if (!isempty())
{
printf("element removed is %d",queue[front]);
front++;
}
else
{
printf("queue underflow\n");
return 0;
}
}
void display()
{
int i;
if(!isempty())
{
printf("queue is :\n");
{
for(i=front;i<=rear;i++)
{
printf("%d\n",queue[i]);
}
}
}
else
{
printf("queue is empty\n:");
}
}
int main()
{
int a;
menu:
printf("\n\t selection menu \n\n 1)enqueue operation \n 2)dequeue operation \n 3)peek \n 4)display\n 5)exit\n\n");
printf("enter your option : ");
scanf("%d",&a);
switch(a)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
peek();
break;
case 4:
display();
break;
case 5:
printf("\n exit \n");
return 0;
default:
printf("invalid choice");
}
goto menu ;
}