#include<stdio.h>
 
 int main()
 {
 	float length;
 	float width;
 	float area;
 	
 	printf("this is my frist program\n");
 	
 	printf("\nenter the length of the rectangle:");
 	scanf("%f",&length);
 	printf("\nenter the width of the rectangle:");
 	scanf("%f",&width);
 	area=length*width;
 	printf("The area of the rectangle=%f",area);
 	return 0;

 }
