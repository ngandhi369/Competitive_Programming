#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,c1,c2,m;
    cin>>q;
    while(q--)
    {
        cin>>c1>>c2>>m;
        if(c1>m)
            c1=c1-m;
        else if(c1<=m)
            c1=m-c1;
        if(c2>m)
            c2=c2-m;
        else if(c2<=m)
            c2=m-c2;
        if(c1==c2)
            cout<<"Mouse C"<<endl;
        else if(c1<c2)
            cout<<"Cat A"<<endl;
        else if(c1>c2)
            cout<<"Cat B"<<endl;
    }
return 0;
}
