#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int s,v,p,maxi=0;
        for(int i=0;i<n;i++)
        {
            cin>>s>>p>>v;
            // if(p%(s+1)==0)
            // {
                int bet = p/(s+1);
                //cout<<"b:"<<bet<<endl;
                if(bet*v > maxi)
                {
                    maxi = bet*v;
                }
            // }
        }
        cout<<maxi<<endl;
    }
return 0;
}
