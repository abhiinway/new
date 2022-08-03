#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    int salary;
    employee(){}
    employee(int x)
    {
        id=x;
        salary=500;
    }
};
class programmer:public employee
{
    public:
    int languagecode=9;
    programmer(int impid)
    {
        id=impid;
    }
};
int main()
{
    employee a(3);
    cout<<a.salary<<endl;
    cout<<a.id<<endl;
    programmer skillf(88);
    cout<<skillf.languagecode<<endl;
    cout<<skillf.id<<endl;
    cout<<a.id;
}