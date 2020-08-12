#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        int flag=0,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]-(i+1)>=3)
            {
                flag=1;
                cout<<"Too chaotic"<<endl;   
                break;
            }
            for(int j = a[i] - 2 > 0 ? a[i] - 2 : 0 ; j < i ; j++) 
            {
                if(a[j]>a[i])
                {
                    c++;
                }
            }
        }
        if(flag==0)
            cout<<c<<endl;
    }
}
