#include<stdio.h>
#include<stdlib.h>
#define MAX 1000000
void print_pair(int *arr,int n, int x)
{
	int s[MAX]={0};
	int i,temp;
    for(i=0;i<n;i++)
    {
       temp=x-arr[i];
       if(s[temp]==1)
       	  printf("required pair is (%d,%d)\n",arr[i],temp);
       s[arr[i]]=1;
    }
}
int main()
{
   int *arr,x,i,n;
   printf("Enter the number of elements:");
   scanf("%d",&n);
   arr=(int*)malloc(n*sizeof(int));
   printf("Enter elements:\n");
   for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
   printf("Enter the value of sum:");
   scanf("%d",&x);
   print_pair(arr,n,x);   
}