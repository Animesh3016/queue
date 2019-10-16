#include<stdio.h> 
#include<stdlib.h>
#define max 50
int queue[max];
int rear,front;
void enqueue(int data)
{if(rear==max-1)
printf("\n queue is full ");
else
{
rear+=1;
queue[rear]=data;}
if(front==-1)
front=0;
}

void dequeue()
{if(front==-1 || front==rear+1)
printf("queue is empty");
else
{
queue[front]=0;
front=front+1;}
}
void display()
{
int i;
if(front==-1)
printf("queue is empty");
else
{
for(i=front;i<=rear;i++)
printf("%d",queue[i]);
printf("\n");
}
}
int main()
{int data,ch,i;
printf("\n enter 1 for add \n enter 2 for delete \n enter 3 for display \n");
while(1)
{printf("enter the choice ");
scanf("%d",&ch);

{switch(ch)
{

case 1: printf("\n enter the data to be add ");
		scanf("%d",&data);
		enqueue(data);
break;
case 2:	dequeue();
        break;
case 3:	display();
        break;
}
}
printf("\n the elemens are %d ",queue[i]);}}
