//7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
     int i,n,count=0;
     printf("Enter a number: ");
     scanf("%d",&n);
     while (n!=0)
     {
          n=n/10;
          count++;
     }
     printf("The count of digit is %d",count);
     
     return 0;

}