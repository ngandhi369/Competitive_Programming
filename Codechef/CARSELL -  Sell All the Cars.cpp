#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int n;
    long long int a[100000];
    const unsigned int M=1000000007;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a[n];
        long long int sum=0;
        for(long int i=0;i<n;i++)
            cin>>a[i];
//        for(long int i=0;i<n;i++)
//            a[i]=a[i]%M;
        sort(a,a+n,greater<long long int>());
//        for(long int i=0;i<n;i++)
//            cout<<a[i]<<" ";
        for(long int i=0;i<n;i++)
        {
            if(a[i]-i>0)
            {
                sum=sum+(a[i]-i)%M;
            }
        }
        cout<<sum%M<<endl;
    }
return 0;
}
