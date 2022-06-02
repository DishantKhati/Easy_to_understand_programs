#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
void insertAtTheBegin(struct Node **start_ref, int data);
void Sort(struct Node *start);
void swap(struct Node *a, struct Node *b);
void printList(struct Node *start);
int main()
{
printf("***Riya Gahtori-G-20012529***\n");        
int arr[] = {12,56,2,11,1,90};
 int arr2[]={12,56,76,4,89,53};
struct Node *start = NULL;
for (int i = 0; i< 6; i++)
insertAtTheBegin(&start, arr[i]);
printf("\n Linked list 1 before sorting ");
printList(start);
Sort(start);
printf("\n Linked list 1 after sorting ");
printList(start);
 struct Node *start2 = NULL;
for (int i = 0; i< 6; i++)
insertAtTheBegin(&start2, arr2[i]);
printf("\n Linked list 2 before sorting ");
printList(start2);
Sort(start2);
printf("\n Linked list 2 after sorting ");
printList(start2);
 struct Node *t=start;
 while(t->next!=NULL){
 t=t->next;
 }
 t->next=start2;
 printf(" \n after joining linkedlist 2 with first one: \n");
 printList(start);
getchar();
return 0;
}
/* Function to insert a node at the beginning of a linked list */
void insertAtTheBegin(struct Node **start_ref, int data)
{
struct Node *ptr1 = (struct Node*)malloc(sizeof(struct Node));
ptr1->data = data;
ptr1->next = *start_ref;
*start_ref = ptr1;
}
/* Function to print nodes in a given linked list */
void printList(struct Node *start)
{
struct Node *temp = start;
printf("\n");
while (temp!=NULL)
{
printf("%d ", temp->data);
temp = temp->next;
}
}
/* Bubble sort the given linked list */
void Sort(struct Node *start)
{
int swapped, i;
struct Node *ptr1;
struct Node *lptr = NULL;
/* Checking for empty list */
if (start == NULL)
return;
do
{
swapped = 0;
ptr1 = start;
while (ptr1->next != lptr)
{
if (ptr1->data > ptr1->next->data)
{
swap(ptr1, ptr1->next);
swapped = 1;
}
ptr1 = ptr1->next;
}
lptr = ptr1;
}
while (swapped);
}
/* function to swap data of two nodes a and b*/
void swap(struct Node *a, struct Node *b)
{
int temp = a->data;
a->data = b->data;
b->data = temp;
}