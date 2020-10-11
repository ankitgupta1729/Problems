#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d %d\n",n,k);
	if(k%2==1)
		printf("%d",k-1);
	else
	{
		if(n<=k)
			printf("%d",k-2);
	}
	return 0;
}