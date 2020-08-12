#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        if (n<=3)
        {
            cout<<1<<"\n";
            cout<<n<<" ";
            while(n)
            {
                cout<<n--<<" ";
            }
            cout<<"\n";
            continue;
        }
        cout<<n/2<<"\n";
        cout<<3<<" 1 2 3"<<"\n";
        long int i=4;
        while(i<=n-1)
        {
            cout<<2<<" "<<i<<" "<<i+1<<"\n";
            i=i+2;
        }
        //cout<<"i:"<<i<<endl;
        if(i==n)
            cout<<1<<" "<<n<<"\n";
    }
    return 0;
}
