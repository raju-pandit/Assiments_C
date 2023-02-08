
//3. Write a program to check whether a given number is an even number or an odd
// number.

#include<stdio.h>

int main()
{
     int number;
     
     printf("Enter the number: ");
     scanf("%d",&number);

      //logic click
     if(number%2 == 0)
     {
          printf("Number is even\n");

     }
     else
     {
          printf("Number is odd\n");
     }
}
