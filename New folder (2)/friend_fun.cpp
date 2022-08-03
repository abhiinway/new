#include<iostream>
using namespace std;
class complex
{
public:
        int hr;
        int sec;
        int mint;
      //  friend complex sum(complex o1,complex o2);
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
   complex sum(complex o1,complex o2);
};
complex complex :: sum(complex o1,complex o2)
{
    sec=o1.sec+o2.sec;
    mint=o1.mint+o2.mint+(sec/60);
    hr=o1.hr+o2.hr+(mint/60);
    sec=sec%60;
    mint=mint%60;
}

int main()
{
    complex c1,c2,c3;
    c1.time();
    c1.display();
    c2.time();
    c2.display();
    c3.sum(c1,c2);
    c3.display();

}
