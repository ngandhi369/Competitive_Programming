#include<bits/stdc++.h>
using namespace std;

//void print(int *x, int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//            cout<<*((x+i*n)+j)<<" ";
//        cout<<endl;
//    }
//}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n][n],b[n][n],p[n];

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                b[i][j] = i*n + (j+1);

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];

        for(int j=0;j<n;j++)
        {
            p[j]=a[j][0]-b[j][0];
            if(p[j]!=0)
                p[j]=1;
        }

        reverse(p,p+n);

//        for(int i=0;i<n;i++)
//            cout<<p[i]<<" ";
//        cout<<endl;

        //print((int *)a, n);

        int c=0,sign=0;

        for(int i=0;i<n-1;i++)
        {
            if(p[i]!=sign)
            {
                c++;
                sign=p[i];
            }
        }
        cout<<c<<endl;
    }

return 0;
}
