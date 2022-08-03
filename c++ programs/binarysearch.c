#include<stdio.h>
int main()
{
    int low,high,mid,i=0,n,num;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element in array\n");
    while(i<n){
    scanf("%d",&arr[i]);
    i++;
    }
    printf("enter the num you wnt to search\n");
    scanf("%d",&num);
    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==num){
        printf("the element is at index %d",mid);
        break;
        }
    else if(arr[mid]<num)
        low=mid+1;
    else if( arr[mid]>num)
        high=mid-1;
    }
    if(low>high)
    {
        printf("element is not in the list");
    }
    return 0;
}
