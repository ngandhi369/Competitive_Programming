#include<stdio.h>
int main()
{
    int x,y,t,i;
    scanf("%d",&t);
    i=t;
    while(i!=0)
    {
        scanf("%d %d",&x,&y);
        if(x<y)
        {
            printf("%d\n",0);
        }
        else
        {
            printf("%d\n",x-y);
        }
    --i;
    }
return 0;
}
