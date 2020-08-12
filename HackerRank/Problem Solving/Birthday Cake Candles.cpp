#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,ans=0;
    cin>>n;
    long int a[n];
    for(long int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(long int i=n-1;i>=0;i--)
    {
        if(a[i]==a[n-1])
            ++ans;
    }
    cout<<ans<<endl;
return 0;
}
