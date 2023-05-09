#include<stdio.h>
 
 int main()
 {
 	float base;
 	float height;
 	float area;
 	
 	printf("this is my frist program\n");
 	
 	printf("\nEnter the base of the triangle:");
 	scanf("%f",&base);
 	printf("\n Enter height of the triangle\n:");
 	scanf("%f",&height);
 	area=0.5*base*height;
 	printf("The area of the rectangle=%f",area);
 	return 0;

 }
