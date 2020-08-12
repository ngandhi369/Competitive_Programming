#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[5],sum1=0,sum2=0;
    for(int i=0;i<5;i++)
        cin>>a[i];
    sort(a,a+5);
    for(int i=0;i<4;i++)
        sum1=sum1+a[i];
    for(int i=1;i<5;i++)
        sum2=sum2+a[i];
    cout<<sum1<<" "<<sum2;
return 0;
}
