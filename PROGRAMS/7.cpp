#include<stdio.h>
#include<stdlib.h>
typedef struct nodes
{
int data;
struct nodes *next;
}node;
node *add()
{
node *new_node;
new_node = (struct nodes *)malloc(sizeof(struct nodes)); new_node->next = NULL;
return new_node;
}
void peek(node *head)
{
node *temp = head;
if(head == NULL)
printf("stack is empty");
else
{
while(temp->next !=NULL)
{
temp = temp->next;
}
printf("top of the stack is : %d",temp->data);
}
}
node *insert(node *head)
{
node *new_ptr = add();
node *temp=head;
int num;
printf("\nenter data: ");
scanf("%d",&num);
new_ptr ->data = num;
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
node *temp = head,*temp2= head->next;
if(head == NULL)
{
printf("stack under flow");
}
else
{
if(temp->next == NULL)
{
free(temp);
head = NULL;
}
else
{
while(temp2->next!=NULL )
{
temp2 = temp2->next;
temp = temp->next;
}
free(temp2);
temp->next = NULL;
}
}
return head;
}
int display(node *head)
{
node *temp = head;
if(head == NULL)
{
printf("empty list");
}
else
{
printf("\nvalue of nodes are : ");
while(temp!=NULL)
{
printf("%d, ",temp->data);
temp = temp->next;
}
}
}
int main()
{
printf("***Riya Gahtori-G-20012529***\n");    
node *head = NULL;
int choice = 0;
while(choice !=5)
{
printf("\n1.Enter data\n2.delete data\n3.peek \n4.Display\n5.Exit\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:	head = insert(head);
break;
case 2:	head = deletenode(head);
break;
case 3:	peek(head);
break;
case 4:	display(head);
break;
case 5:	break;
}
}
}
