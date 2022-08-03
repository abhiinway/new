#include <stdio.h>
void input(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void bubble(int arr[],int n)
{
    int issorted=0;
    int tem;
    for(int i=0;i<n-1;i++)
    {
        printf("in pass %d",i+1);
        issorted=1;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                 tem=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=tem;
                 issorted=0;
            }
        }
        if (issorted)
            break;
    }
}
void display(int arr[], int n){
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
printf("\n");
}

}
int main()
{
    int arr[8];
    input(arr,8);
    display(arr,8);
    bubble(arr,8);
    display(arr,8);
}
