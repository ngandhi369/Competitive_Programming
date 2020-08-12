#include<bits/stdc++.h>
using namespace std;

int fun(int p1,int q1)
{
    if(p1>=0)
        return q1+q1-p1;
    else
        return p1+(p1-q1);
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int p1,p2,q1,q2,r1,r2;
        cin>>p1>>p2>>q1>>q2;
        r1=fun(p1,q1);
        r2=fun(p2,q2);
        cout<<r1<<" "<<r2<<endl;
    }
return 0;
}
