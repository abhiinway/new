#include<iostream>
using namespace std;
class complex
{
public:
        int hr;
        int mint;
        int sec;
    int time()
    {
        cout <<"enter the time "<<endl;
        cout <<"enter hour"<<endl;
        cin>>hr;
        cout <<"enter mint";
        cin>>mint;
        cout <<"enter sec";
        cin>>sec;
    }
     void display()
     {
         cout <<hr<<" : "<<mint<<" : "<<sec <<endl;
     }
 friend  void sum(complex o1,complex o2);
};
 void sum(complex o1,complex o2)
{
   int s,m,h;
    s=o1.sec+o2.sec;
    m=o1.mint+o2.mint+(s/60);
    h=o1.hr+o2.hr+(m/60);
    s=s%60;
    m=m%60;
    cout <<h<<":"<<m<<":"<<s;
}

int main()
{
    complex c1,c2,c3;
    c1.time();
    c1.display();
    c2.time();
    c2.display();
    sum(c1,c2);

}
