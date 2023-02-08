
// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.

#include<stdio.h>

int main()
{
     int number;
     
     printf("Enter the number: ");
     scanf("%d",&number);

      //logic click
     if((number & 1) == 1)
     {
          printf("Number is odd\n");

     }
     else
     {
          printf("Number is even\n");
     }
     return 0;
}