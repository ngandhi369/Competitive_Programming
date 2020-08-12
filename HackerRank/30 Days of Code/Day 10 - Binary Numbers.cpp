#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k=0;
    cin>>n;
    int s[n];
    while(n>0)
    {
        s[k++]=n%2;
//        cout<<"s[k]:"<<s[k-1]<<endl;
        n=n/2;
        if(n==1)
        {
            s[k++]=1;
            break;
        }
    }
//    cout<<endl;
//    for(long int i=0;i<k;i++)
//        cout<<s[i]<<" ";
//     cout<<"k:"<<k<<endl;
    long int flag=0,b[k],l=0;

    for(long int i=0;i<k;)
    {
        flag=0;
        if(s[i]==0)
        {
            flag=0;
            ++i;
            continue;
        }
        while(s[i]==1)
        {
            ++flag;
            ++i;
        }
        b[l++]=flag;
    }
//    for(int i=0;i<l;i++)
//        cout<<b[i]<<" ";

    //cout<<b[l-1]<<endl;
    cout<<*max_element(b,b+l)<<endl;
return 0;
}
