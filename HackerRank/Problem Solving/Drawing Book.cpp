#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,p,count=0;
    cin>>n>>p;
    n=(n+2)/2;
    p=(p+2)/2;
    long int front=p-1;
    long int back=n-p;
    cout<<min(front,back);
    return 0;
}
