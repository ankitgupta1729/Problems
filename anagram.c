#include<stdio.h>
#include<stdlib.h>

int main()
{
   long int i,count1=0,count2=0;
   char arr1[64000],arr2[64000];
   printf("Enter first string\n");
   scanf("%s",arr1);            
   printf("Enter second string\n");
   scanf("%s",arr2);            
   for(i=0;i<64000;i++)
     {
        count1 = arr1[i];
        count2 += arr2[i];
     } 
    printf("\n%ld %ld",count1,count2);
    if(count1 == count2)
         printf("Both strings are anagram");
    else
        printf("Both strings are not anagram");
}
