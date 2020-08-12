#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,t,n,s,k,o,m;
    cin>>t;
    while(i<t)
    {
        cin>>n>>s;
        int f,p[n],c[n],d[n];
        k=0,o=0,m=0;

        for(int i=0;i<n;i++)
            cin>>p[i];
        for(int i=0;i<n;i++)
        {
            cin>>f;
            if(f==0)
                c[k++]=p[i];
            else if(f==1)
                d[o++]=p[i];
        }
        m=*min_element(c,c+k) + *min_element(d,d+o) + s;
        if(m<=100)
            cout<<"yes\n";
        else
            cout<<"no\n";
        ++i;
    }
return 0;
}
