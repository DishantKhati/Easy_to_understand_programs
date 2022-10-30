#include<stdio.h>
int sort(int arr[],int lb,int ub)
{
int start = lb,end = ub,num = arr[lb],temp;
while(start<end)
{
while(arr[start]<=num)
start ++;
while(arr[end]>num)
end --;
if(start<end)
{
temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
}
}
temp = arr[lb];
arr[lb] = arr[end];
arr[end] = temp;
return end;
}
int quicksort(int arr[],int lb,int ub)
{
if(lb<ub)
{
int loc = sort(arr,lb,ub);
quicksort(arr,lb,loc-1);
quicksort(arr,loc+1,ub);
}
}
int search(int arr[],int size)
{
int flag = 0,num = NULL;
for(int i = 0;i<size;i++)
{
if(arr[i]!=arr[i+1]&& arr[i]!=num)
{
flag++;
}
else if(arr[i] == arr[i+1])
{
num = arr[i];
}
if(flag == 2)
{
printf("second non repeating element is %d\n",arr[i]);
flag = 0;
}
}
}
int main()
{
int size;
printf("***Riya Gahtori-G-20012529***\n");
printf("enter size of array\n");
scanf("%d",&size);
int arr[size];
printf("enter elements of array :\n");
for(int i = 0;i<size;i++)
scanf("%d",&arr[i]);
quicksort(arr,0,size);
search(arr,size);
}
