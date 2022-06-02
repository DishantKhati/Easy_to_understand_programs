#include<stdio.h>
#include<stdlib.h>
typedef struct nodes
{
int data;
struct nodes *pre,*next;
}node;
node *add()
{
node *new_node;
new_node = (node *)malloc(sizeof(node));
new_node->next = NULL;
new_node->pre = NULL;
return new_node;
}
node *insert(node *head)
{
int num;
printf("enter data :");
scanf("%d",&num);
node *new_ptr,*temp = head;
new_ptr = add();
new_ptr->data = num;
if(head == NULL)
{
head = new_ptr;
}
else
{
while(temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_ptr;
new_ptr->pre = temp;
}
return head;
}
void checkpalindrome(node *head)
{
int flag = 0;
node *temp1 = head,*temp2 = head;
while(temp2->next!=NULL)
{
temp2 = temp2->next;
}
while(temp2 != NULL && temp1!=NULL)
{
if(temp1->data != temp2->data)
{
flag = 1;
}
temp1 = temp1->next;
temp2 = temp2->pre;
}
if(flag == 0)
{
printf("is is a palindrome");
}
else
{
printf("not a palindrome");
}
}
int main()
{
printf("***Riya Gahtori-G-20012529***\n");    
node *head=NULL;
int choice = 0;
while(choice !=3)
{
printf("\n1.Insert element\n2.palindrome\n3.exit \nenter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:	head = insert(head);
break;
case 2:	checkpalindrome(head);
break;
case 3:	break;
default:	printf("enter valid number : \n");
}
}
}