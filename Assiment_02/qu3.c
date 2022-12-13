//Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
     int x=10, y=40, z;
     z=x;
     x=y;
     y=z;
     printf("x=%d,y=%d",x,y);
     return 0;
}