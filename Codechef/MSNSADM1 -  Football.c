#include<stdio.h>
int main()
{
    int n,max,t,i;
    int A[150],B[150];
    scanf("%d",&t);
    int j=0,c=0;
    while(j<t)
    {
        max=0;
        scanf("%d",&n);
        for(i=0;i<n;++i)
        {
            scanf("%d",&A[i]);
        }
        for(i=0;i<n;++i)
        {
            scanf("%d",&B[i]);
        }
        i=0;
        while(i<n)
        {
            if(max<((A[i]*20)-(B[i]*10)))
            {
                max = (A[i]*20)-(B[i]*10);
            }
            i++;
        }
        printf("%d\n",max);
        ++j;
    }
return 0;
}
