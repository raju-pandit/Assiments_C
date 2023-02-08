// 2. Write a program to print the first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
     int i,n;
     printf("The first the number of you want print: ");
     scanf("%d",&n);


     for(i=1; i<n; i++)
     {
          printf("%d\n",i);
     }
     getch();
  return 0;    
}