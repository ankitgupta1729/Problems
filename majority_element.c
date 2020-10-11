#include <stdio.h>
#include <limits.h>

int majority_element(int *arr ,int size);

int main()
  {
      int a[64000],i,n,x,count=0;
      printf("Enter the no. of elements : ");
      scanf("%d",&n);
      printf("Enter the elements in which you have to find majority element if exist\n");
      for(i=0;i<n;i++)
           scanf("%d",&a[i]);
      //for(i=0;i<n;i++)
        //   printf("%d\n",a[i]);
      
       x= majority_element(a,n);
       for(i=0;i<n;i++)
          {
            if(x==a[i])
               count +=1;
          }
        if(count >= ((n/2)+1))
           printf("Majority Element is : %d ",x);
        else
           printf("No Majority Element Exist");

  }

int majority_element(int *arr ,int size)
  {
    int n,voter=arr[0], votes=1;
    for(int i=1;i<n;i++)
       {
          if(voter==arr[i])
             votes +=1;
          else if((voter != arr[i]) && (votes !=0)) 
             votes -=1;
          else if((voter != arr[i]) && (votes ==0))
             {
                voter=arr[i];
                votes=1;
             }
       }
      if(votes >= 1)
        return voter;
      else
        printf("No Majority Element Exist ");
   }
