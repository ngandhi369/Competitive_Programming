#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n],c[n],k=0;
        for(int i=0;i<n;i++)
        {
            c[i]=0;
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]==0)
            {
                c[k++]=a[i];
            }
        }
        sort(c,c+k, greater<int>());
        long int sum=0,j,l=0;
        for(j=0;j<n;j++)
        {
            if(sum<0)
            {
                break;
            }
            if(b[j]==1)
            {
                cout<<a[j]<<" ";
                sum=sum+a[j];
            }
            else if(b[j]==0)
            {
                cout<<c[l]<<" ";
                sum=sum+c[l];
                l++;
            }
            //cout<<"sum:"<<sum<<endl;
        }
        while(j<n)
        {
            if(b[j]==1)
                cout<<a[j]<<" ";
            else if(b[j]==0)
                cout<<c[l++]<<" ";
            j++;
        }
        cout<<endl;
    }
    return 0;
}
