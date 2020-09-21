#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n],maxi=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            maxi = max(0LL,maxi+a[i]);
        }
        cout<<maxi<<endl;
    }

return 0;
}
