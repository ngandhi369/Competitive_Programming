#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[26],b[26],c[26],n=0;
    string s;
    for(int i=0;i<26;i++)
        cin>>a[i];
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;s[i]!=NULL;i++)
    {
        s[i]=s[i]-'97';
        b[i]=s[i]-42;
    }
//    cout<<"b:"<<endl;
//   for(int i=0;s[i]!=NULL;i++)
//        cout<<b[i]<<" ";
//    cout<<endl;
    int k=0;
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(i==b[j])
            {
                c[k++]=a[i];
                //cout<<"i:"<<i<<" a:"<<a[i]<<endl;
            }
        }
    }
    //cout<<"k:"<<k<<endl;
//    for(int i=0;i<k;i++)
//        cout<<c[i]<<" ";
    sort(c,c+k);
    //cout<<endl;
    cout<<s.size()*c[k-1];
return 0;
}
