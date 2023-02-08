//9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.

#include<stdio.h>

int main()
{
     int a,b,c;

     printf("Enter the three number:  \n");
     scanf("%d %d %d",&a,&b,&c);

     //click logic
     
     if((a>b) && (a>c))
       printf("%d is greatest \n",a);

     else if((b>a) && (b>c))
        printf("%d is greatest \n",b);  
     
     else if((c>a) && (c>b))
       printf("%d is greatest \n",c);

     else if ((a==b) || (b==c) || (a==c))
     printf("Greatest number is repeated !\n");
   return 0;
}