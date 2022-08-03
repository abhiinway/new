#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
struct node *head,*newnode;
head= 0;
newnode=(struct node *)malloc(sizeof (struct node))
printf("enter the data \n");
scanf ("%d",&newnode->data);
newnode->next=0;
head=newnode;
}
