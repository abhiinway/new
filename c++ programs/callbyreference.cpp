//write a c++program to swap value using call by reference.
#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int a,b;
    cout <<"enter the two numbers"<<endl;
    cin>>a>>b;
    cout <<"Before swapping="<<a   <<b<<endl;
    swap(a,b);
    cout <<"After swapping="<<a <<b<<endl;
}
