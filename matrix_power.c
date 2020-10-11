#include<stdio.h>
#include<stdlib.h>
long long int sqr(long long int **arr,long long int n)
{

    long long int i,j,k,temp[n][n];
	for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		temp[i][j]=0;
    	}
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		for(k=0;k<n;k++)
    		{
    			temp[i][j] += arr[i][k]*arr[k][j];
    		}
    	}
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		arr[i][j]=temp[i][j];
    	}
    }
}
long long  int matrix_multiply(long long int **arr,long long int **temp1,long long int n)
{
   long long  int i,j,k,temp2[n][n];
   for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		temp2[i][j]=0;
    	}
    }
   for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		for(k=0;k<n;k++)
    		{
    			temp2[i][j] += arr[i][k]*temp1[k][j];
    		}
    	}
    }
   for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		arr[i][j]=temp2[i][j];
    	}
    }   
}
long long  int matrix_power(long long int **arr,long long int **arr1,long long int n,long long int m)
{
	long long int i,j,p;
	if(m==1)
		return **arr;
	else if(m==0)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j)
					arr[i][j]=1;
				else
					arr[i][j]=0;
			}
		}
	}
	else if(m==3)
	{
		matrix_multiply(arr,arr1,n);
		matrix_multiply(arr,arr1,n);
	}
	else
	{  
	  if(m%2==0)
	  {	
	    matrix_power(arr,arr1,n,m/2);
	    sqr(arr,n);
	  }
	  else
	  {
	  	p=m-1;
        matrix_power(arr,arr1,n,p/2);	 
        sqr(arr,n); 	
        matrix_multiply(arr,arr1,n);
	  }
	}
}

int main(int argc, char const *argv[])
{
	long long  int n,m,i,j;
	long long int **arr,**arr1;
	printf("Enter the power of the matrix:");
	scanf("%lld",&m);
    printf("Enter the size of the matrix:");
    scanf("%lld",&n);
    arr=(long long int**)malloc(n*sizeof(long long int*));
    for(i=0;i<n;i++)
    	arr[i]=(long long int*)malloc(n*sizeof(long long int));
    arr1=(long long int**)malloc(n*sizeof(long long int*));
    for(i=0;i<n;i++)
    	arr1[i]=(long long int*)malloc(n*sizeof(long long int));
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%lld",&arr[i][j]);
    	}
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		arr1[i][j]= arr[i][j];
    	}
    }
    matrix_power(arr,arr1,n,m);
    printf("Transformed matrix is:\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("%lld ",arr[i][j]);
    	}
    	printf("\n");
    }
	return 0;
}