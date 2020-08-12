#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,day,month,flag=0;;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    cin>>day>>month;
    if(month>1)
    {
        int a[n-1];
        for(int i=0;i<n-1;i++)
            a[i]=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i;j<i+month;j++)
            {
                //cout<<"a["<<i<<"]:"<<a[i]<<" s["<<j<<"]:"<<s[j]<<endl;
                a[i]=a[i]+s[j];
            }
        }
    //    for(int i=0;i<n-1;i++)
    //        cout<<"a["<<i<<"]:"<<a[i]<<endl;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==day)
                ++flag;
        }
    }
    else if(month==1)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]==day)
                ++flag;
        }
    }
    cout<<flag;
return 0;
}
