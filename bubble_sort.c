// Bubble Sort 
#include<stdio.h>
#include<stdlib.h>
int bubble_sort(int*,int);
int main()
{
  int n,*arr;
  printf("Enter the number of elements which you want to sort:");
  scanf("%d",&n);
  arr =(int*)malloc(n*sizeof(int));
  bubble_sort(arr,n); 
  return 0;
}
int bubble_sort(int *p,int n)
{
  int i,j,temp=n;
  int swapped=0;
  printf("Enter elements\n");
  for(int i=0;i<n;i++)
     scanf("%d",&p[i]);

  for(int i=0;i<n;i++)
     printf("Elements before sorting:%d\n",p[i]);
 
   for(i=0; i<n;i++)
     {
       for(j=0;j<(temp-1);j++)
         {
             if(p[j]>p[j+1])
                {
                    p[j]=p[j]-p[j+1];
                    p[j+1]=p[j]+p[j+1];
                    p[j]=p[j+1]-p[j];
                    swapped=1;
                }
             
         }
              if(swapped==0)
                  break;
          temp--;
     }
    printf("Elements after sorting:\n");
    for(int i=0;i<n;i++)
     printf("%d\n",p[i]);
}
