#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
   return (*(int*)a - *(int*)b);
}
int main()
{
   int n,i;
   int *arr;
   printf("Number of elements which you want to sort: ");
   scanf("%d",&n);
   arr=(int*)malloc(sizeof(int));
   printf("Enter the elements:\n");
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
   printf("List before sorting\n");
   for(i=0;i<n;i++)
      printf("%d\n",arr[i]);
   qsort(arr,n,sizeof(int),cmp);
   printf("List after sorting\n");
   for(i=0;i<n;i++)
      printf("%d\n",arr[i]);
}