//write a c++ program to check number is palendrome or not.
# include <iostream>
using namespace std;
int main()
{
    int n,originalnumber,r,result=0;
    cout <<"Enter a number in integer "<<endl;
    cin>>n;
    originalnumber=n;
    while(n!=0)
    {
    r=n%10;
    result=(result*10)+r;
    n/=10;
    }
    if(originalnumber==result)
    {
        cout<<"Number is  palendrome "<<endl;
    }
    else
    {
        cout<<"Number is not palendrome"<<endl;
    }
    return 0;
}
