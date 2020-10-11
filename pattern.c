#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int n,i=0,k,temp1,temp2,j=0,p,q;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    p=2*n-1;
    for(k=0;k<n;k++)
    {
       j=0,i=i+k;
       temp1=n; 
       temp2=n;
       while(j<k)
        {
            printf("%d ",temp1);
            temp1--;
            j++;
        }
       while(i<p)
       {
            printf("%d ",temp1);
            i++;
       }
       while(i<2*n-1)
       {
           temp1++;
           printf("%d ",temp1);
           i++;
       }
        p--;
        i=0;
        printf("\n"); 
    }
    i=0,p=2,j=0;
    for(k=n;k>1;k--)
    {
       j=0,i=i+k;
       temp1=n; 
       temp2=n;
       while(j<k-1)
        {
            printf("%d ",temp1);
            temp1--;
            j++;
        }
        temp1++;
        q=i+p;
       while(i<q)
       {
            printf("%d ",temp1);
            i++;
       }
       while(i<2*n)
       {
           temp1++;
           printf("%d ",temp1);
           i++;
       }
        p=p+2;
        i=0;
        printf("\n");
    }

    return 0;
}

