#include<stdio.h>
int main()
{
int n , i;
printf("enter the size \n");
scanf ("%d",&n);
int *p=(int *) malloc (n*sizeof (int));
for (i=0;i<n;i++)
scanf("%d",&p[i]);
free(p);
for (i=0;i<n;i++)
    printf ("%d",p[i]);



}
