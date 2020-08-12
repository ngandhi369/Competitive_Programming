#include<stdio.h>

int main()
{
    int A[3],C[3],t,i=0;
    scanf("%d",&t);
    while(i<t)
    {
        int flag=0;
        int count=0;
        for(int i=0;i<3;++i)
            scanf("%d",&A[i]);
        for(int i=0;i<3;++i)
            scanf("%d",&C[i]);

        for(int i=0;i<2;++i)
        {
            for(int j=i+1;j<3;++j)
            {
                if(A[i]<A[j] && C[i]<C[j])
                    flag++;
                else if(A[i]==A[j] && C[i]==C[j])
                    flag++;
                else if(A[i]>A[j] && C[i]>C[j])
                    flag++;
            }
        }
        if(flag==3)
                printf("FAIR\n");
        else
                printf("NOT FAIR\n");
        ++i;
    }
return 0;
}
