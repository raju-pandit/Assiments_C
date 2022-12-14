
//8. Write a program to print squares of the first 10 natural numbers

#include<stdio.h>

int main()
{
     int i,j,sum;
     printf("Squares of the first 10 natural numbers is: \n");
     scanf("%d",&j);
     for(i=0; i<=10; i++)
     {
          sum=i*i;
          printf("%d  %d",i, sum);
     }
}