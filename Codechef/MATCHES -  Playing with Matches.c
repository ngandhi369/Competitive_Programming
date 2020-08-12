#include<stdio.h>
int fun(int x)
{
    switch(x)
    {
    case 0:return 6;
        break;
    case 1:return 2;
        break;
    case 2:return 5;
        break;
    case 3:return 5;
        break;
    case 4:return 4;
        break;
    case 5:return 5;
        break;
    case 6:return 6;
        break;
    case 7:return 3;
        break;
    case 8:return 7;
        break;
    case 9:return 6;
        break;
    default:return 0;
        break;
    }
}
int main()
{
    int i=0,t;
    long int a,b,n;
    scanf("%d",&t);
    while(i<t)
    {
        scanf("%ld %ld",&a,&b);
        int rem,sum=0;
        n=a+b;
        while(n!=0)
        {
            rem=n%10;
            sum=sum+fun(rem);
            n=n/10;
        }
        printf("%d\n",sum);
        ++i;
    }
return 0;
}
