#include<iostream>
using namespace std;
int main()
{
    int fact=1,i,n;
    cout<<"enter the number for factorial:\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial of "<< n<<" is "<<fact;
    return 0;
}
