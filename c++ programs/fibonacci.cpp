    //  write a c++ program to print fibonacci series.
    #include<iostream>
    using namespace std;
    int main()
    {
        int n;
        int n1=0,n2=1;
        int next=n1+n2;
        cout<<"enter the number till you want fibonacci series"<<endl;
        cin>>n;
        cout <<"     ";
        cout<<n1  <<" \t  "<<n2  ;
        for (int i=3;i<=n;i++)
        {
            cout<< " \t"<< next;the fibonacci series is
            n1=n2;
            n2=next;
            next=n1+n2;
        }
        return 0;
    }
