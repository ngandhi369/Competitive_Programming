#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,n,k;
    long long int a,b,c,d,e,s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>a;
        s=a+2*(unsigned long long)pow(10,n);
        cout<<s<<endl;
        fflush(stdout);
        cin>>b;
        c=(unsigned long long)pow(10,n)-b;
        cout<<c<<endl;
        fflush(stdout);
        cin>>d;
        e=s-a-b-c-d;
        cout<<e<<endl;
        fflush(stdout);
        cin>>k;
        if(k==-1)
            break;
        else
            continue;
    }
    return 0;
}
