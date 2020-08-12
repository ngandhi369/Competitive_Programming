#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],ans=0,x=0;
    cin>>n;
    a[n];
    for(int i=0;i<n;i++)
    {   
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        x=0;
        while(a[i]==a[i+1])
        {
            ++x;
            if(x%2!=0)
                ++ans;
            ++i;
        }
    }
    cout<<ans;
return 0;
}
