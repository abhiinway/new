#include<iostream>
using namespace std;
class over
{
    int a,b;
    public:
    over(int x,int y)
    {
        a=x;
        b=y;
    }
    over(int x)
    {
        a=x;
        b=4;
    }
    over()
    {
        a=4;
        b=6;
    }
     
    void display()
    {
        cout<<"the point are =";
        cout << "(" << a << "," << b << ")" << endl;
    }
};
int main()
{
    over o1(3,5);
    o1.display();
    
    over o2(5);
    o2.display();

    over o3;
    o3.display();

}