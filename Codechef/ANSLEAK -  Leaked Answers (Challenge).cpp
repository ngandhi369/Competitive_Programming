#include<bits/stdc++.h>
using namespace std;

int freq(int* b,int k,int m);
int l=0;
int main()
{
    int t,n,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        int a[n][k],b[k];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                cin>>a[i][j];
                b[j]=a[i][j];
            }
            cout<<freq(b,k,m)<<" ";
        }
        cout<<"\n";
    }
return 0;
}
int freq(int* b,int k,int m)
{
    int a[9];
    for(int i=0;i<9;i++)
        a[i]=0;
    for(int i=0;i<k;i++)
    {
        if(b[i]==1)
            ++a[0];
        else if(b[i]==2)
            ++a[1];
        else if(b[i]==3)
            ++a[2];
        else if(b[i]==4)
            ++a[3];
        else if(b[i]==5)
            ++a[4];
        else if(b[i]==6)
            ++a[5];
        else if(b[i]==7)
            ++a[6];
        else if(b[i]==8)
            ++a[7];
        else if(b[i]==9)
            ++a[8];
    }
    int max=a[0],i,o=0;
    for(i=1;i<m;++i)
    {
        if(max<a[i])
        {
            max=a[i];
            o=i;
        }
    }
    if(max==1)
    {
        if(l==k)
            l=0;
        o=b[l++]-1;
    }
    return o+1;
}
