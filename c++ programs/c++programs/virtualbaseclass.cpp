#include <bits/stdc++.h>
using namespace std;
class base1
{
    protected:
    int a;
    public:
    base1(){}
    base1(int x){
        a=x;
        cout <<"the base 1 constructor is called";

    }
    void printdata()
    {
        cout <<"base 1 a = "<<a<<endl;

    }
};
class base2
{
    protected:
    int a;
    public:
    base2(int x)
    {
        a=x;
        cout <<"the base 2 constructor is called"<<endl;

    }
    void printdata2()
    {
        cout <<"base 2 a = "<<a<<endl;
    }
};
class derived:public base1,public base2{
    protected:
    int m,n;
    public:
    derived(int x,int y,int z,int h):base1(x),base2(y){
        m=z;
        n=h;
        cout<<"derived constructor is called"<<endl;
    }
    void display()
    {
        cout <<"m="<<m<<endl;
        cout <<"n="<<n<<endl;
        printdata();printdata2();
    }

};

int main(){
    derived hie(1,2,3,4);
   hie.display();

}