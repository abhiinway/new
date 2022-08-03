#include<iostream>
using namespace std;
class complex
{
public:
        int hr;
        int mint();
        int sec();
    int time()
    {
        cout <<"enter the time ";
        cout <<"enter hour";
        cin>>hr;
        cout <<"enter mint";
        cin>>mint;
        cout <<"enter sec";
        cin>>sec;
    }
     friend complex sum(complex o1,complex o2);
     void display()
     {
         cout <<hr<<" : "<<mint<<" : "<<sec;
     }
};
complex sum(complex o1,complex o2)
{
    sec=c1.sec+c2.sec;
    mint=c1.mint+c2mint+(sec/60);
    hr=c1.hr+c2.hr+(mint/60);
    sec=sec%60;
    mint=mint%60;
    cout <<hr<<" : "<<mint<<" : "<<sec;
}

int main()
{
    complex c1,c2,c3;
    c1.time();
    c2.time();
    c3.sum(c1,c2);

}
