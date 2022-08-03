#include<stdio.h>
int main()
{
    int n,i,num;
    printf("enter the size of the array\n");
    scanf("%d",&n);
     int low=0;
       int high=n-1;
     int mid=(low+high)/2;

    int arr[n];
    printf("enter the elements\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number you want to compare\n");
    scanf("%d",&num);
    while(low<=high)
    {
        mid = (low/2 + high/2);
        if(arr[mid]==num)
        {
            printf("the num is at index %d",mid);
            break;
        }
        else if ( arr[mid]<num)
            low=mid+1;
        else if (arr[mid]>num)
            high=mid-1;
    }
    if(low<mid)
    printf("element not present\n");
    return 0;
}
