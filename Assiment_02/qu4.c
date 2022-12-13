//Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
     int x=3, y=2;
     x=x+y;
     y=x-y;
     x=x-y;
     printf("x=%d , y=%d",x,y);
     return 0;
}