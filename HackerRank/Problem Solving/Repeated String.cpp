#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[105];
    int i,N=0,coun=0;
    long int n=0,ans=0;
    cin>>s;
    N=strlen(s);
    cin>>n;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a')
            ++coun;
    }
    ans=(n/N)*coun;
    n=n%N;
    coun=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a')
            ++coun;
    }
    ans=ans+coun;
    cout<<ans<<endl;
return 0;
}
