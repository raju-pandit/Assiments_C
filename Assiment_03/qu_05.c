
// 5. Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>

int main()
{
     int number;

     printf("Enter the number: ");
     scanf("%d",&number);

     //logic click
     if((number > 99) && (number < 1000))
     {
        printf("The number is three digit\n");
     }
     else
     {
        printf("The number is not three digit\n");
     }
     return 0;
}