//Objective: write a program to check the number entered by the user is prime or not.
#include <iostream>
using namespace std;
int main()
{
int i, n;
bool is_prime =true;
cout<< "enter a positive integer:\n";
cin>>n;
if(n==0 ||n==1)
is_prime=false;
for (i=2;i<=2;++i)
{
    if(n%i==0){
    is_prime=false;
    break;
    }
}
if(is_prime)
cout<<n <<"  is a prime number\n";
else
cout<<n <<"  is not a prime number\n";
return 0;
}
