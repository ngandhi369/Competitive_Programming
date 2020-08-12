#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long int t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(long int i=m;i<=n;i++)
        {
            int c=0;
            if(i==1)
                continue;
            for(long int j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                cout<<i<<endl;
            }
        }
        cout<<endl;
    }
return 0;
}
