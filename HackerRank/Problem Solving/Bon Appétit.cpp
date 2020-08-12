#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int k,n,c,sum=0;
    cin>>n>>k;
    int b[n];
    for(long int i=0;i<n;i++)
    {
        cin>>b[i];
        sum+=b[i];
    }
    cin>>c;
    sum-=b[k];
    sum/=2;
    if(sum==c)
        cout<<"Bon Appetit";
    else
        cout<<c-sum;

return 0;
}
