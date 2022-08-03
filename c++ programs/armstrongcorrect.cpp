//  write a c++ program to check wheather the number is armstrong or not.
#include<iostream>
using namespace std;
int main( )
{
    int n,originalnumber,result=0,r;
    cout << "Enter the number in interger form"<<endl;
    cin>>n;
    originalnumber=n;
    while(n>0)
    {
        r=originalnumber%10;
        result+=(r*r*r);
        n=n/10;
    }
    if(n==result)
        {
        cout<<"Armstrong number is =  "<<result;
        }
    else
        {
        cout <<"number is not a Armstrong number it is =  "<<result;
        }
    return 0;
}
