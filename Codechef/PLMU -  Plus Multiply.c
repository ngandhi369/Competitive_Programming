#include<stdio.h>
int main()
{
    int t;
    long int n,i;
    long long int x[40000],ans,c,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&x[i]);

        ans=0;
        c=0;
        b=0;
        for(i=0;i<n;i++)
        {
            if(x[i]==2)
            {
                ++c;
            }
            if(x[i]==0)
            {
                ++b;
            }
        }

        for(i=1;i<c;i++)
            ans=ans+i;
        for(i=1;i<b;i++)
            ans=ans+i;
        printf("%lld\n",ans);
    }
return 0;
}
