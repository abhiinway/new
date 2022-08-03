//write a c++ program to create a reference variable.
#include<iostream>
using namespace std;
int main()
{
    int sum =5;
    int &total=sum;
    cout <<sum<<endl;
    cout <<total<<endl;
    total=total+10;
    cout <<sum<<endl;
    cout <<total<<endl;
}
