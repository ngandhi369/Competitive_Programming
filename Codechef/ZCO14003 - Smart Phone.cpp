#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n],max=0,now=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<long long int>());
    max=a[0];
    for(int i=0;i<n;i++)
    {
        now=a[i]*(i+1);
        if(now>max)
            max=now;
    }
    cout<<max<<endl;
return 0;
}
