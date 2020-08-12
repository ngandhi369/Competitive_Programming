#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>a[i][j];
        }
    }
    int j,sum=0,max=-63,flag=-1;
    for(int i=0;i<=3;i)
    {
        ++flag;
        //cout<<"flag: "<<flag<<endl;
        //max=0;
        sum=0;
        for(j=flag;j<flag+3;j++)
        {
            //cout<<"aa:"<<a[i][j]<<" ab:"<<a[i+2][j]<<endl;
            sum=sum+a[i][j]+a[i+2][j];
        }
        //cout<<"b:"<<a[i+1][j-2]<<endl;
        sum=sum+a[i+1][j-2];
        //cout<<"sum:"<<sum<<endl;
        if(max<sum)
            max=sum;
        if(flag<3)
            i=i;
        else
        {
            ++i;
            flag=-1;
        }
    }
    cout<<max;
return 0;
}
