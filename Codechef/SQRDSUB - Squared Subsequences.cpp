#include<bits/stdc++.h>
using namespace std;

long long fun(long int arr[],long int n, int sum)
{
    unordered_map<long int,long int> prevSum;

    long long res = 0;

    int currsum = 0;

    for (int i = 0; i < n; i++) {

        currsum += arr[i];

        if (currsum == sum)
            res++;

        if (prevSum.find(currsum - sum) !=
                                  prevSum.end())
            res += (prevSum[currsum - sum]);


        prevSum[currsum]++;
    }

    return res;
}

int main()
{
    int t;
    long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long int a[n],b[n];
        for(long int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
                a[i]*=-1;
        }
        for(long int i=0;i<n;i++)
        {
            if(a[i]%4==0)
                b[i]=2;
            else if(a[i]%2==0)
                b[i]=1;
            else
                b[i]=0;
        }
        long long flag=fun(b,n,1);
        cout<<(long long)n*(n+1)/2-flag<<"\n";
    }
return 0;
}

