#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    set<int> s;
    set<int,greater<int>> ss;

    for(int i=0;i<m;i++){
        int a;cin>>a;

        s.insert(a);
        ss.insert(a);
    }


    int realans=0;

    for(auto i:s)cout<<i<<" ";cout<<endl;
    for(auto i:ss)cout<<i<<" ";cout<<endl;

    for(int i=0;i<n;i++){

        int ans = 1000000000;

       if(s.lower_bound(i)!=s.end())
            ans = min(ans,*s.lower_bound(i)-i);

        if(ss.lower_bound(i)!=ss.end())
            ans = min(ans,i-*ss.lower_bound(i));


        realans=max(ans,realans);
    }

    cout<<realans;

}
