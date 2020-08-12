#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c_l=0,c_h=0;
    cin>>n;
    long int a[n],l,h;
    for(int i=0;i<n;i++)
        cin>>a[i];
    l=h=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<l)
        {
            l=a[i];
            ++c_l;
        }
        else if(a[i]>h)
         {
             h=a[i];
             ++c_h;
         }
    }
    cout<<c_h<<" "<<c_l;
return 0;
}
