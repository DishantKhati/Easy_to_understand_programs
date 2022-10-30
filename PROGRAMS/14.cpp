#include<stdlib.h>
#include<stdio.h>
typedef struct node
{
int data;
struct node *next;
}node;
void insert(node ** head)
{
node *temp=(node *)malloc(sizeof(node));
int value;
printf("enter value: ");
scanf("%d",&value);
if(*head==NULL)
{
temp->data=value;
temp->next=temp;
*head=temp;
}
else
{
temp->data=value;
temp->next=(*head)->next;
(*head)->next=temp;
}
}
void display(node * head)
{
node *t;
t=head->next;
do
{
printf("%d ",t->data);
t=t->next;
}
while(t!=head->next);
}
int main()
{
printf("***Riya Gahtori-G-20012529***\n");    
node * head=NULL;
int choice=1;
while(choice!=0)
{
printf("for insertion enter 1, 2 for display , 0 to exit: ");
scanf("%d",&choice);
switch(choice)
{
case 1:	insert(&head);
break;
case 2:	display(head);
printf("\n");
break;
case 0:	break;
default:	printf("wrong choice \n");
break;
}
}
return 0;
}
