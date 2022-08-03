#include<iostream>
using namespace std;
inline  int add (int x ,int y)
{
    return x+y;
}
int main()
{
    int a=3,b=6,x;
    x=add(a,b);
    cout<<"sum is = "<<x;
    return 0;
}
