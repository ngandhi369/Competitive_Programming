#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,q,a,b,k;
    cin>>n>>q;
    long long sum=0,max=0;
    long int *y = new long int[n+1]();
    while(q--)
    {
        cin>>a>>b>>k;
        y[a]+=k;
        if(b<n)
            y[b+1]-=k;
    }
    for(long int i=1;i<=n;i++)
    {
        sum=sum+y[i];
        if(max<sum)
            max=sum;
    }
    cout<<max;
return 0;
}
