//write a c++ program of S.I using function and having rate as default argument.
#include<iostream>
using namespace std;
SimpleInterest(float p,float t,float r=3)
{
    float Total=0;
    Total=(p*t*r)/100;
     cout<<"Simple Interest ="<<Total;
}
int main()
{
    float x,y,result;
    cout<<"enter principle value and time "<<endl;
    cin>>x>>y;
   SimpleInterest(x,y);
    return 0;
}
