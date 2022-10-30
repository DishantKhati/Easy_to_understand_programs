#include<stdio.h>
typedef struct priority_queue
{
int ele;
int pr;
}queue;
int isempty(queue arr[],int cur)
{
if(cur == -1)
{
return 1;
}
else
{
return 0;
}
}
int isfull(queue arr[],int cur,int size)
{
if(cur == size)
{
return 1;
}
else
{
return 0;
}
}
int gethighprior(queue arr[],int cur,int size)
{
int pr2 = -1;
if(isempty(arr,cur) == 0)
{
for(int i = 0;i<=cur;i++)
{
if(arr[i].pr > pr2)
pr2 = arr[i].pr;
}
return pr2;
}
}
int deletehighprior(queue arr[],int cur,int size)
{
int p,i,j,ele;
p = gethighprior(arr,cur,size);
for(i = 0;i<=cur;i++)
{
if(arr[i].pr == p)
{
ele = arr[i].ele; break;
}
}
if(i<cur)
{
for(j = i;j<cur;j++)
{
arr[j].ele = arr[j+1].ele;
arr[j].pr = arr[j+1].pr;
}
}
cur--;
return cur;
}
void display(queue arr[],int cur)
{
for(int i = 0;i<=cur;i++)
{
printf("element %d\tpriority %d\n",arr[i].ele,arr[i].pr);
}
}
void main()
{
printf("***Riya Gahtori-G-20012529***\n");    
queue arr[5];
int size = 5,cur = -1;
arr[0].ele = 1;
arr[0].pr = 0;
cur++;
arr[1].ele = 2;
arr[1].pr = 2;
arr[1].ele = 3;
arr[1].pr = 1;
cur++;
display(arr,cur);
printf("\nhighert priority %d",gethighprior(arr,cur,size)); cur = deletehighprior(arr,cur,size);
printf("\nafter deletion:\n");
display(arr,cur);
}
