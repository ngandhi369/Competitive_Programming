#include<stdio.h>
int main()
{
    long int n,m,k,l,r;
    long int c[100],p[100];
    long int temp,flag,t,ans,a,e;
    scanf("%ld",&a);
    e=a;
    while(e!=0)
    {
        scanf("%ld %ld %ld %ld %ld",&n,&m,&k,&l,&r);
        for(int i=0;i<n;++i)
        {
            scanf("%ld",&c[i]);
            scanf("%ld",&p[i]);
        }
        for(int i=0;i<n;++i)
        {
            for(int j=i;j<n;++j)
            {
                if(p[i]>p[j])
                {
                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                    flag=c[i];
                    c[i]=c[j];
                    c[j]=flag;
                }
            }
        }
        for(int i=0;i<n;++i)
        {
            t=m;
            while(t!=0)
            {
                if(c[i]>k+1)
                    c[i]=(c[i]-1);
                else if(c[i]<k-1)
                    c[i]=(c[i]+1);
                else if(c[i]>=k-1 && c[i]<=k+1)
                    c[i]=k;
                --t;
            }
        }
        for(int i=0;i<n;++i)
        {
            if(c[i]>=l && c[i]<=r)
            {
                ans=p[i];
                break;
            }
            else
            {
                ans=-1;
            }
        }
        printf("%ld\n",ans);
        --e;
    }
return 0;
}
