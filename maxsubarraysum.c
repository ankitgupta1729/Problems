#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i, *A;
	scanf("%d", &n);
       	A = malloc(n*sizeof(int));	
	for(i = 0; i < n; i++)
	{
		scanf("%d",A+i);
	}
	int maxsum = A[0],sum = A[0];
	for(i = 1; i < n; i++)
	{
		if(A[i] > A[i-1])//sum should be sum(A[i-1]) + A[i], if sum(A[i-1]) is +ive)
		{
			if(sum > 0) sum += A[i];
			else sum = A[i];
		}
		else
		{
			sum = A[i];
		}
		if(sum > maxsum) maxsum = sum;
	}
	printf("Max sum of subarray = %d\n", maxsum);
	return 0;
}

