#include<stdio.h>
int main()
{
    int n,m,ind,num;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter how many element you wnt in array\n");
    scanf("%d",&m);
    printf("\nenter the elements in the array\n");
    for (int i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\narray element before insert\n");
     for (int i=0;i<m;i++)
    {
        printf("%d",arr[i]);
    }
    printf("enter the index\n");
    scanf("%d",&ind);
    printf("enter the element you want to insert\n");
    scanf("%d",&num);
    m++;
    for(int i=m-1 ;i>=ind;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[ind]=num;

    printf("the inserted array is\n");
    for (int i=0;i<m;i++)
    {
        printf("%d",arr[i]);
    }

}
