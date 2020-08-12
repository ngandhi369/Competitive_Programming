#include <stdio.h>

int main(void) {
	int x;
	float y;
	float ans;
	scanf("%d%f",&x,&y);
	ans=y;
	if(x+0.50<y)
	{
	    if(x%5==0)
	    {
	        ans=y-x-0.50;
	    }
	}
	printf("%.2f",ans);
	return 0;
}

