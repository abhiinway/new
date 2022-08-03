#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // cin >> n;
    map <int,string> m;

    m[1]="abc";
    m[2]="def";
    for(auto &val:m)
     cout << val.first << " " << val.second << endl;

}