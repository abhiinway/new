#include<stdio.h>
#define N 5
int queue[5];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(front ==-1&&rear==-1)
    {
        front =rear=0;
        queue[rear]=x;
        printf("the enqued element is %d\n",queue[rear]);
    }
    else if((rear+1)%N==front )
        printf("queue is full\n");
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
        printf("the enqued element is %d\n",queue[rear]);
    }
}
void dequeue()
{
    if (front ==-1  && rear==-1)
    {
        printf("queue is empty \n");
    }
    else if (front == rear)
    {
         printf("the dequed element is %d\n",queue[front]);
        front =rear =-1;
    }
    else
    {
        printf("the dequed element is %d\n",queue[front]);
        front =(front +1)%N;
    }
}
void display()
{
    if (front==-1&&rear ==-1)
    {
        printf("the queque is empty\n");
    }
    else
    {
        int i =front ;
        if (front ==-1 && rear==-1)
            printf("empty queue \n");
        else
        {
            while (i!=rear)
        {
            printf("%d",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[i]);
        }
    }
}

int main ()
{
    enqueue (5);
    enqueue (6);
    enqueue (7);
    enqueue (8);
    enqueue (9);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

}
