//5. Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main()
{  
     int i;
     printf("The first 10 odd natural number is: \n");
     //click logic
     for(i=10; i>=1; i--)
     {
          printf("%d\n",2*i-1);
     }
}