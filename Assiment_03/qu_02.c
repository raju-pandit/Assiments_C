
// 2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>

int main()
{
     int number;
     printf("Enter the given number: ");
     scanf("%d",&number);

     //logic click
     
     if((number%5) == 0)
     {
          printf("Number is divisible by 5\n");
     }
     else
     {
          printf("Number is not divisible ny 5\n");
     }

    return 0;
}