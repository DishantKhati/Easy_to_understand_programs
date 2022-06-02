#include<stdio.h>
#include<ctype.h>
int push(int stack[],int top,int x)
{
stack[++top] = x;
return top;
}
int pop(int stack[], int top)
{
return stack[top];
}
int main()
{
printf("***Riya Gahtori-G-20012529***\n");
int stack[20],top = -1;
char exp[20];
char *e;
int n1,n2,n3,num;
printf("Enter the expression :: ");
scanf("%s",exp);
e = exp;
while(*e != '\0')
{
if(isdigit(*e))
{
num = *e - 48;
top=push(stack,top,num);
}
 
else
{
n1 = pop(stack,top);
top--;
n2 = pop(stack,top);
top--;
switch(*e)
{
case '+':	n3 = n1 + n2;
break;
case '-':	n3 = n2 - n1;
break;
case '*':	n3 = n1 * n2;
break;
case '/':	n3 = n2 / n1;
break;
}
top=push(stack,top,n3);
}
e++;
}
printf("\nThe result of expression %s = %d\n\n" ,exp ,pop(stack,top--));
return 0;
}
