#include<stdio.h>
#include<stdlib.h>
int recursinreverse(int arr[],int start,int end)
{
if(start>=end)
return 0;
int temp;
temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
recursinreverse(arr,start+1,end-1);
}
int main()
{
printf("***Riya Gahtori-G-20012529***\n");    
int size;
printf("enter size of array: ");
scanf("%d",&size);
int *arr = (int *)malloc(sizeof(int)*size);
printf("enter elements of array: \n");
for(int i = 0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("elements before reverse are : \n");
for(int i = 0;i<size;i++)
{
printf("%d\n",arr[i]);
}
recursinreverse(arr,0,size-1);
 
printf("\nelements after reverse are :\n");
for(int i = 0;i<size;i++)
{
printf("%d\n",arr[i]);
}
}