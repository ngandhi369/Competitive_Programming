#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int j=0,b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                b[j++]=i;
        }
        int flag=0;
        for(int i=1;i<j;i++)
        {
            if(b[i]-b[i-1]<6)
            {
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==0)
            cout<<"YES"<<endl;
    }
return 0;
}