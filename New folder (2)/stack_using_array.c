//Objective: write a program to implement stack using array.
#include<stdio.h>
#define n 7
int stack[n],i,j,choice=0,m,top=-1;
void push();
void pop();
void display();
int main()
{
    while(choice!=4)
    {
    printf("\nchoose one from the below option\n1.push\n2.pop\n3.display\n4.exit\n");
    printf("enter choice\n");
    scanf("%d",&choice);
        switch(choice)
        {
            case 1:
        {
            push();
            break;
        }
            case 2:
            {
                pop();
                break;
            }
            case 3:
                {
                    display();
                    break;
                }
            case 4:
                {
                break;
                }
            default:
                printf("invalid choice\n");

        };
    }
}
void push()
{
    int val;
    if (top>=n-1)
    {
        printf("overflow condition\n");
    }
    else
    {
        printf("enter the value\n ");
        scanf("%d",&val);
        top++;
        stack[top]=val;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow condition\n");
    }
    else
    {
        int a;
       a= stack[top];
       top--;
       printf("%d",a);
    }
}
void display()
{
    for (i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
    if(top==-1)
    {
        printf("\nstack is empty\n");
    }
}
