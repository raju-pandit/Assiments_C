//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
     int x,y,i;
     printf("Enter 2 number: ");
     scanf("%d %d",&x,&y);

     for(i=1; i<=x*y; i++)
     {
          if((i%x == 0) && (i%y == 0) )
          {
               printf("LCM tf %d and %d id %d",x,y,i);
               break;
          }
     }
     return 0;
}
