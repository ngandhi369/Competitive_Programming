#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m;
    long int x;

    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x;

        int a[n],b[m];
        long int sum=0;
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];

        int i=0,count=0;
        while(i<n)
        {
            sum=sum+a[i];
            if(sum>x)
            {
                sum=sum-a[i];
                break;
            }
            i++;
        }
        count=i;

        int j=0;
        while(j<m)
        {
            sum=sum+b[j];
            j++;
            while (sum > x && i > 0)
            {
                i--;
                sum=sum-a[i];
            }
            count = (sum <= x) ? max( (count), (i + j) ) : count;
        }

        cout<<count<<endl;
    }
    return 0;
}
