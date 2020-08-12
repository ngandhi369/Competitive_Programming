#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int b,k=0;
    cin>>b;
    int n,m;
    cin>>n>>m;
    long int x[n],y[m],a[n*m];
    memset(a,-1,n*m);
    for(long int i=0;i<n;i++)
        cin>>x[i];
    for(long int i=0;i<m;i++)
        cin>>y[i];
    for(long int i=0;i<n;i++)
    {
        for(long int j=0;j<m;j++)
        {
            a[k++]=x[i]+y[j];
        }
    }
    sort(a,a+k);
    int r=0;
    for(long int i=k-1;i>=0;i--)
    {
        if(a[i]<=b)
        {
            ++r;
            cout<<a[i];
            break;
        }
    }
    if(r==0)
        cout<<-1;
return 0;
}
