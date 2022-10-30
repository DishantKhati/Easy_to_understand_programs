#include<stdio.h>
int push(char stack[], int top, int max, char ip)
{
if(top==max-1)
{
		printf("\nstack full. can not insert more");
}
else
{
stack[++top] = ip;
}
return top;
}
int pop(char stack[], int top)
{
if(top==-1)
printf("\nstack empty. can not delete more");
else
{
if(stack[top]!='(')
printf("%c ",stack[top]);
top-=1;
}
return top;
}
int main()
{
printf("***Riya Gahtori-G-20012529***\n");    
int max=30,top=-1, c;
char ip_str[50], stack[30], ip;
printf("\n enter the infix expression: ");
scanf("%s",ip_str);
int i=0;
while(ip_str[i]!='\0')
{
if(ip_str[i]=='+' || ip_str[i]=='-')
{
if(top==-1 || stack[top]== ' ( ')
top=push(stack,top,max,ip_str[i]);
else	if(stack[top]=='+' || stack[top]=='-'|| stack[top]=='*' || stack[top]=='/' || stack[top]=='^')
{
				top=pop(stack, top); i-=1;
}
}
else if(ip_str[i]=='*' || ip_str[i]=='/')
{
if(top==-1|| stack[top]=='(' || stack[top]=='+' || stack[top]=='-')
top=push(stack,top,max,ip_str[i]);
else if(stack[top]=='*' || stack[top]=='/' ||  stack[top]=='^')
			{
				top=pop(stack, top);
				i-=1;
			}
}
else if(ip_str[i]=='^')
top=push(stack,top,max,ip_str[i]);
else if(ip_str[i]=='(')
top=push(stack,top,max,ip_str[i]);
else if(ip_str[i]==')')
	 {
				while(top!=-1 && stack[top]!='(')
					top=pop(stack, top);
if(top==-1 || stack[top]!='(')
printf("\nERROR");
else
top=pop(stack, top);
}
else
printf("%c ",ip_str[i]);
i++;
}
while(top!=-1) top=pop(stack, top);
printf("\n");
}
