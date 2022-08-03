//  write a c++ program to overload area function.
#include<iostream>
using namespace std;
int area (int a ,int b)
{
    int areaofrectangle;
    areaofrectangle=a*b;
    cout<<"area of rectangle = "<<areaofrectangle<<endl;
}
float area(int r)
{
    int areaofcircle;
    areaofcircle=r*r*3.14;
    cout<<"area of circle = "<<areaofcircle<<endl;
}
int main()
{
    int a,b,r,l;
    cout <<"enter the length and breadth\n";
    cin>>a>>b;
    cout <<"enter the radius of a circle\n";
    cin>>r;
    area(a,b);
    area(r);
}
