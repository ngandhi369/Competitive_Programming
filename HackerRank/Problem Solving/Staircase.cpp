#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n-1-i;k++)
            cout<<" ";
        for(int j=0;j<=i;j++)
            cout<<"#";
        cout<<endl;
    }
return 0;
}
