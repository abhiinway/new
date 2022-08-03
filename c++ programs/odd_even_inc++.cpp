//  write a c++ program to check that the numbet is even or odd.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter the number to check even or odd"<<endl;
    cin>>n;
    if(n%2==0)
    {
        cout <<"Number is even";
    }
    else
    {
        cout<<"Number is odd";
    }
    return 0;
}
