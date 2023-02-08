//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
     int i,sum=0,n;
     printf("Enter the number: \n");
     scanf("%d %d",&i,&n);
     sum=i+n;
  
    
     while (i<=n)
     {
          printf("%d",2*i);
          sum+=2*i;
          i++;
     }
        printf("the sum of two even natural number is %d",i);



}