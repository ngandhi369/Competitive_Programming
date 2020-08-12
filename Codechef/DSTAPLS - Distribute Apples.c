#include <stdio.h>

int main(void) {
	// your code goes here
	long long int n,k;
    long long int c;
    int t;
    int i=0;
    scanf("%d",&t);
    while(i<t)
    {
        scanf("%lld %lld",&n,&k);
        if(n%k==0)
        {
            c=n/k;
            if(c%k==0)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
        ++i;
    }
	return 0;
}