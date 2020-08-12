#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    map<string,string>m;
    string s,number;
    for(long int i=0;i<n;i++)
    {
        cin>>s>>number;
        m[s]=number;
    }
    string s1;
    while(cin>>s1)
    {
        if(m.find(s1)==m.end())
            cout<<"Not found"<<endl;
        else
            cout<<s1<<"="<<m[s1]<<endl;
    }

return 0;
}
