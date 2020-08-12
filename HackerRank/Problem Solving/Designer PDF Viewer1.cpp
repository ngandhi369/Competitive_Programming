#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[26],b[26],c[26];
    for(int i=0;i<26;i++)
        cin>>a[i];
    string s;
    cin>>s;
    for(int i=0;s[i]!=NULL;i++)
        b[i]=s[i]-'a';
//    for(int i=0;s[i]!=NULL;i++)
//        cout<<b[i]<<endl;
    for(int i=0;i<s.size();i++)
        c[i]=a[b[i]];
    sort(c,c+s.size());
    cout<<s.size()*c[s.size()-1];

return 0;
}
