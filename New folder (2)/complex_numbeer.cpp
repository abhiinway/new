#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void sum(complex o1,complex o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void display()
    {
        cout<<"number = "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(2,3);
    c1.display();
    c2.setdata(3,6);
    c2.display();
    c3.sum(c1,c2);
    c3.display();
}
