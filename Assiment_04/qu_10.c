
//10. Write a program to print a table of 5.
#include<stdio.h>
#include<conio.h>
int main()
{
     int i , j;
     printf("Enter a number: \n");
     scanf("%d",&j);

     for(i=1 ; i<=10 ; i++)
     {
          printf("%d x %d = %d\n",j,i,i*j);
     }
     getch();
}
