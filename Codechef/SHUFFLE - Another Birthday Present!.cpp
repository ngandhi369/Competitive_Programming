#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int n,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        long int a[n],b[n],c[n];
        for(long int i=0;i<n;i++)
        {
            cin>>a[i];
            c[i]=a[i];
        }
        sort(c,c+n);
        int l=0;
        for(long int i=0;i<n;i=i+p)
        {
            for(int j=0;j<n-p;j++)
            {
                if(a[j]>a[j+p])
                {
                    swap(a[j],a[j+p]);
                }
            }
        }
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=c[i])
            {
                f=1;
                cout<<"no\n";
                break;
            }
        }
        if(f==0)
            cout<<"yes\n";
    }
return 0;
}
