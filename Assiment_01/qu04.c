// WAP
//to find the area of the circle. Take radius of circle from user as input and print the result in
//below given format.

#include<stdio.h> 
int main() 
{ 
int r; 
float PI = 3.14, area; 
printf("Enter radius of circle: "); 
scanf("%d", &r); 
area = PI * r * r; 
printf("\nArea of circle : %f ", area); 
return 0; 
} 
 