#include<iostream>
using namespace std;
int main()
{
    long int n,d;
    cin>>n>>d;
    long int a[n];
    for(long int i=0;i<n;i++)
        cin>>a[i];
    if(d==n)
    {
        for(long int i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
    else
    {
        for(long int i=d;i<n;i++)
            cout<<a[i]<<" ";
        for(long int i=0;i<d;i++)
            cout<<a[i]<<" ";
    }
return 0;
}
