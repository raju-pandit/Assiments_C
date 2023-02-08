//6. Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
     int n=0,i=0;
     printf("Enter the number: \n");
     scanf("%d",&n);
     n=2*n;
     for(i=1;i<=n;i++)
     {
          if(i%2==0)
          printf("%d\n",i);
     }
     return 0;


     //click logic
     
}