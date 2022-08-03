#include<stdio.h>
#define n 6
int queue[n];
int front = -1;
int rear=-1;
void enqueue(int x)
{
    if(rear==n-1)
    {
        printf(" \nqueue overflow \n");
    }
    else if (front ==-1&&rear==-1)
    {
        front = rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}
    void dequeue()
    {
        if (front ==-1&&rear==-1)
        {
            printf("stack underflow\n");
        }
        else if (front ==rear)
        {
            printf("\n%d is the deleted item\n",queue[front]);
            front =rear=-1;
        }
        else
        {
            printf("\n%d is the deleted item\n",queue[front]);
            front++;
        }
    }
    void display()
    {
        if (front==-1&&rear==-1)
        {
            printf("queue is empty\n");
        }
        else{
        for(int i=front;i<rear+1;i++)
        {
            printf("%d",queue[i]);
        }
    }
    }

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}
