#include<iostream>
using namespace std;
class base 
{
    private:
    int b;

    protected:
    int a=99;
};
class derived :protected base
{
    public:
    void display()
    {
        cout<<a;
    }
};
int main()
{
    base b;
    derived d;
    d.display();
    return 0;
}