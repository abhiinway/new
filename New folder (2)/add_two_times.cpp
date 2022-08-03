#include<iostream>
using namespace std;
class time2;
class time
{
    int hr;
    int minute;
    int sec;
public:
    void getdata()
    {
        cout<<"enter time"<<endl;
        cin>>hr>>minute>>sec;
    }
      friend void sum(time o1,time2 o2);
};
class time2
{
    int hr2;
    int minute2;
    int sec2;
public:
    void putdata()
    {
        cout<<"enter time 2"<<endl;
        cin>>hr2>>minute2>>sec2;
    }
  friend  void sum(time o1,time2 o2);
};
void sum(time o1,time2 o2)
{
    int h,m,s;
    m=o1.minute+o2.minute2+(s/60);
    s=o1.sec+o2.sec2;
    h=o1.hr+o2.hr2+(m/60);
    h=h%60;
    m=m%60;
    cout << h<<":"<<m<<":"<<s;
}
int main()
{
    time a;
    time2 b;
    a.getdata();
    b.putdata();
    sum(a,b);
}
