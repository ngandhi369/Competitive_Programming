#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int t,n;
    long long int c,sum,x;

    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;

        sum=n*(n+1)/2;

        if(sum%2!=0)
        {
            cout<<0<<"\n";
            continue;
        }

        x=(sqrtl(1ul + 4*(sum))-1)/2;

        c = n-x;

        if(x*(x+1)/2 == sum/2)
        {
            c = c + x*(x-1)/2 + (n-x)*(n-x-1)/2;
        }

        cout<<c<<"\n";
    }

return 0;
}

