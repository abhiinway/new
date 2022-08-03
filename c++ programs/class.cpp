#include<iostream>
using namespace std;
class abc
{
 public:

    void mymethod(int n);
};
void abc::mymethod(int n){
cout<<n+1;
}
int main(){
abc a;
a.mymethod(6);
}
