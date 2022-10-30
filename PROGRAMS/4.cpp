#include<stdio.h>
void peek(int arr[],int cur)
{
if(cur == -1)
{
printf("stack is empty:");
}
else
{
printf("top of the stack is: %d",arr[cur]);
}
}
void add(int arr[],int cur,int end)
{
if(cur>=end)
{
printf("stack over flow");
}
else
{
int num ;
printf("\nenter data to be added: "); scanf("%d",&num);
arr[cur] = num;
}
}
int pop(int cur)
{
if(cur == -1)
{
printf("under flow");
}
else
{
return cur-1;
}
}
void display(int arr[],int cur)
{
printf("elements of stack are -:\n");
for(int i = 0;i<=cur;i++)
{
printf("%d\t",arr[i]);
}
}
int main()
{
printf("***Riya Gahtori-G-20012529***\n");    
int choice = 0,size,cur = -1;
printf("enter maximum size of stack:\n"); scanf("%d",&size);
int arr[size];
while(choice !=5)
{
printf("\n1.Enter data\n2.delete data\n3.peek \n4.Display\n5.Exit\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: 	add(arr,cur+1,size);
cur++;
break;
case 2:	cur = pop(cur);
break;
case 3:	peek(arr,cur);
break;
case 4:	display(arr,cur);
break;
case 5:	break;
}
}
}
