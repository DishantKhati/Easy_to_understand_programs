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
node *createnode(node *head)
{
node *new_node,*temp = head; int num;
new_node = add(); printf("Enter data : "); scanf("%d",&num); new_node ->data = num;
if(head == NULL)
{
head = new_node;
}
else
{
while(temp->next!=NULL)
{
temp = temp->next;
}
temp->next = new_node; temp = new_node;
}
return head;
}
void display(node *head)
{
node *temp = head;
printf("\nelements of linked list are: ");
while(temp!=NULL)
{
printf("%d, ",temp->data);
temp = temp->next;
}
}
node * deletealternode(node *head)
{
node *node = head,*nextnode = head->next; while(node!=NULL && nextnode!=NULL)
{
node->next = nextnode->next;
free(nextnode);
if(node->next != NULL)
{
nextnode = node->next;
}
node = node->next; nextnode = nextnode->next;
}
return head;
}
int main()
{
printf("***Riya Gahtori-G-20012529***\n");    
node *head = NULL;
head = createnode(head);
head = createnode(head);
head = createnode(head);
head = createnode(head);
head = createnode(head);
display(head);
head = deletealternode(head);
display(head);
}