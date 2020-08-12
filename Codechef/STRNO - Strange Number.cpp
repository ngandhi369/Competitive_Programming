#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long int x,k,flag=0;
    while(t--)
    {
        flag=0;
        cin>>x>>k;
        if(x<=k)
        {
            cout<<0<<endl;
            continue;
        }
        if(k==1)
        {
            cout<<1<<endl;
            continue;
        }
        while(x%2==0)
        {
            x=x/2;
            ++flag;
        }
        //here number is odd
        for(int i=3;i<=sqrt(x);i=i+2)
        {
            while(x%i==0)
            {
                ++flag;
                x=x/i;
            }
        }
        if(x>2)
            ++flag;
        if(flag>=k)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
return 0;
}
