#include<bits/stdc++.h>
using namespace std;
class complexx {
	int a, b;
public:
	void setdata (int x,int y)
	{
		a=x;
		b=y;
	}
	void setdatabysum(complexx o1, complexx o2)
	{
		a=o1.a+o2.a;
		b=o1.b+o2.b;
	}
	void printdata()
	{
		cout <<"the complex number is "<<a<<"+"<<b<<"i"<<endl;
	}

};
int main()
{

complexx c1,c2,c3;
c1.setdata(2,4);
c2.setdata(3,2);
c3.setdatabysum(c1,c2);
c3.printdata();

}
