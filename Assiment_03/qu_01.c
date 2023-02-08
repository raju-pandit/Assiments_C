
// 1. Write a program to check whether a given number is positive or non positive.

#include<stdio.h>
 
 int main()
{
     int number;

     printf("Enter a number:  ");
     scanf("%d",&number);

     if(number > 0)
     {
     printf("Number is positive\n");
     }

     else if(number < 0)
     {
     printf("Number is non-postive\n");
     }
     return 0;
}