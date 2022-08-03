#include<bits/stdc++.h>
using namespace std;
class Marks
{
    public:
    int roll_number,marks;
    string name;
    int setrollno(int x)
    {
        roll_number=x;
        cout <<roll_number;
    }
    string setname(string y)
    {
        name=y;
        cout << name;
    }
    
};
class physics:public Marks
{
    public:

    int setmarks()
    {
        cout <<"enter the rollno.\n";
        cin>>roll_number;
        int m;
        cout <<"enter the name\n";
        cin>>name;
        cout << "enter the physics marks";
        cin>>m;
        marks=m;
    }

};
class chemistry:public physics
{
    public:
    int setmarks2()
    {
        int m;
        cout <<"enter the rollno.\n";
        cin>>roll_number;
        cout <<"enter the name\n";
        cin>>name;
        cout << "enter the chemistry marks";
        cin>>m;
        marks=m;
    }

};
class mathematics:public chemistry
{
    public:
    int setmarks3()
    {
        int m;
        cout <<"enter the rollno.\n";
        cin>>roll_number;
        cout <<"enter the name\n";
        cin>>name;
        cout << "enter the mathematics marks";
        cin>>m;
        marks=m;
    }
};
int main()
{
    int n;
    cout <<"enter the student u want\n";
    cin>>n;
    Marks student[n];
    physics mark[n];
    chemistry mark2[n];
    mathematics mark3[n];
    for(int i=0;i<n;i++)
    {
        mark[i].setmarks();
        mark2[i].setmarks2();
        mark3[i].setmarks3();
    }
}