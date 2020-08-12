#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a=0,x[1000000],ans=0;
    cin>>n;
    x[n];
    string s;
    cin>>s;
    for(long int i=0;i<n;i++)
    {
        if(s[i]=='U')
            x[i]=++a;
        else if(s[i]=='D')
            x[i]=--a;
    }
    for(long int i=0;i<n;i++)
    {
        if(x[i]==0 && x[i-1]<0)
            ++ans;
    }
    cout<<ans;
return 0;
}
