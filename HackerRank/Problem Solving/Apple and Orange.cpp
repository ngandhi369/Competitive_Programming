#include<bits/stdc++.h>
#include<assert.h>
using namespace std;
void read(long long int *x,long int m,long int a)
{
    for(long int i=0;i<m;i++)
    {
        cin>>x[i];
        x[i]=x[i]+a;
    }
}

void cou(long long int *x,long int m,long int s,long int t)
{
    long int count=0;
    for(long int i=0;i<m;i++)
    {
        if(x[i]>=s && x[i]<=t)
             ++count;
    }
    cout<<count<<endl;
}

int main()
{
    long s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    long long int x[m],y[n];
    assert(a<s && s<t && t<b);
    read(x,m,a);
    read(y,n,b);
    cou(x,m,s,t);
    cou(y,n,s,t);
return 0;
}
