//8. Write a program to check whether a given year is a leap year or not.

#include<stdio.h>

int main()
{
     int year;
     printf("Enter Leap year: \n");
     scanf("%d",&year);

     //click logic
     if(((year%4==0) && (year%100 !=0)) || (year%400 == 0))
     printf("%d is a Leap year\n",year);
     else
     printf("%d is a Leap year\n",year);
}