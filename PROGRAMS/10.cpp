#include<stdio.h>
#include<stdlib.h>
#define max 50
int enqueue(int arr[], int *front, int rear)
{
int item;
if(rear==max-1)
printf("queue is full.\n");
else
{
if(*front==-1)
*front=0;
printf("enter element to be inserted: ");
scanf("%d",&item);
rear++;
arr[rear]=item;
}
return rear;
}
int dequeue(int arr[], int front)
{
if(front==-1)
printf("queue is empty.\n");
else
{
printf("element deleted: %d",arr[front]);
front++;
}
return front;
}
void display(int arr[], int front, int rear)
{
if(front==-1)
printf("queue is empty.\n");
else
{
printf("queue elements:\n");
for(int i=front;i<=rear;i++)
printf("%d ",arr[i]);
}
}
int main()
{
printf("***Riya Gahtori-G-20012529***\n");    
int arr[max];
int front=-1,rear=-1;
int choice;
while(1)
{
printf("\n1.inserting an element in queue\n2.deleting an element from queue\n3.displaying queue\n4.exit\n");
printf("enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
rear=enqueue(arr,&front,rear);
break;
case 2:
front=dequeue(arr,front);
break;
case 3:
display(arr,front,rear);
break;
case 4:
exit(1);
break;
default:
printf("wrong choice.\n");
break;
}
}
return 0;
}