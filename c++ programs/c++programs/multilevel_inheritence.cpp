#include<bits/stdc++.h>
using namespace std;
class mammals
{
    public: 
    void put()
    {
        cout << "I am a mammal"<< endl;
    }

};
class marineAnimals :public mammals
{
    public:
    void put2()
    {
        cout << "I am a marine animal"<< endl;
    }

};
class bluewhale : public marineAnimals
{
    public:
    void put3()
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals"<< endl;
    }

};
int main()
{
    mammals o1;
    o1.put();

    marineAnimals o2;
    o2.put2();
    o2.put();

    bluewhale o3;
    o3.put3();
    o3.put();
    o3.put2();

    return 0;
}