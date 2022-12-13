//Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)

#include<stdio.h>
int mian()
{
     int x=2456,y;
     y=x%10;
     x=x-y;
     printf("%d",x);
     return 0;
}