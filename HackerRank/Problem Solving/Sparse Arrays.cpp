#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,q,count;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cin>>q;
    string c[q];
    for(int i=0;i<q;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<q;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(c[i]==s[j])
                ++count;
        }
        cout<<count<<endl;
    }
return 0;
}
