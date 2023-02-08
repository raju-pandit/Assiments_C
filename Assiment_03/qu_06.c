
//6. Write a program to print greater between two numbers. Print one number if both are
// the same.

#include<stdio.h>

int main()
{
     int num1,num2;
     printf("Enter the two number: ");
     scanf("%d %d",&num1,&num2);

     //click logic
     
     if(num1 > num2)
     {
          printf("number 1 is greater\n");
     }
     else if(num1 == num2)
     {
          printf("both number is equal\n");
     }
     else
     {
          printf("number 2 is greater \n");
     }
     return 0;
}