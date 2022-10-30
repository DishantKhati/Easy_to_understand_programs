#include<stdio.h>
#include<stdlib.h>
typedef struct nodes
{
int data;
struct nodes *next;
}node;
node *add()
{
node *new_ptr;
new_ptr = (node *)malloc(sizeof(node));
new_ptr->next = NULL;
return new_ptr;
}
node *insert(node *head)
{
int num;
node *new_ptr,*temp = head;
new_ptr = add();
printf("enter data: ");
scanf("%d",&num);
new_ptr->data = num;
if(head == NULL)
{
head = new_ptr;
}
else
{
while(temp->next!=NULL)
{
temp = temp->next;
 
}
temp->next = new_ptr;
}
return head;
}
node *deletenode(node *head)
{
node *temp = head;
head = temp->next;
free(temp);
return head;
}
void display(node *head)
{
node *temp=head;
while(temp!=NULL)
{
printf("%d, ",temp->data);
temp = temp->next;
}
}
int main()
{
printf("***Riya Gahtori-G-20012529***\n");    
node *head = NULL;
int choice = 0;
while(choice !=4)
{
printf("\n1.Enter data\n2.delete data\n3.Display \n4.Exit\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:	head = insert(head); 
break;


case 2:	head = deletenode(head);
break;
case 3:	display(head);
break;
case 4:	break;
}
}
}
