#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int a, b;

public:
    friend void distance(point, point);
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<"the point are =";
        cout << "(" << a << "," << b << ")" << endl;
    }
};
void distance(point o1, point o2)
{
    int x_diff = (o2.a - o1.a);
    int y_diff = (o2.b - o1.b);
    int diff = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
    cout << "the distance between two points is = " << diff<<endl;
}
int main()
{
    point p1(6, 0);
    p1.display();

    point p2(9, 0);
    p2.display();

    distance(p1, p2);

    point p3(1, 2);
    p3.display();

    point p4(4, 6);
    p4.display();

    distance(p3, p4);

    point p5(1, 1);
    p5.display();

    point p6(1, 1);
    p6.display();

    distance(p5, p6);
}