#include<stdio.h>
int givemax(int *a,int n);
int main()
{
    int t,n;
    int p[1000],s[1000],a[1000];
    int sum,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&p[i],&s[i]);
        }
        sum=0;
        for(int i=1;i<=8;i++)
        {
            k=0;
            for(int j=0;j<n;j++)
            {
                if(p[j]==i)
                {
                    a[k++]=s[j];
                }
            }
            if(k!=0)
            {
                sum+=givemax(a,k);
            }
        }
        printf("%d\n",sum);
    }
return 0;
}
int givemax(int *a,int n)
{
    int maxi=a[0];
    for(int i=0;i<n;i++)
    {
        if(maxi<a[i])
        {
            maxi=a[i];
        }
    }
    return maxi;
}
