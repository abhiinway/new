#include<iostream>
#include<string>
using namespace std;
class binary
{
    string s;
public:
    void read();
    void check();
    void onescompliment();
   void display();
};
void binary::read()
{
    cout<<"enter the number"<<endl;
    cin>>s;
}
void binary :: check()
{
    for (int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0'&&s.at(i)!='1')
        {
            cout<<"error binary number\n";
            break;
        }
    }
}
void binary::onescompliment()
{
    int i;
    for(int i=0;i<s.length();i++)
    {
        if (s.at(i)=='0')
            s.at(i)='1';
        else
            s.at(i)='0';
    }
}
void binary :: display ()
{
for (int i=0;i<s.length();i++)
{
                cout <<s.at(i);
}
}

int main()
{
    binary b;
    b.read();
    b.check();
    b.onescompliment();
    b.display();

}
