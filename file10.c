#include<stdio.h>

  int main()
  {
  	float principle;
  	float rate; 
  	float time;
  	float Si;
  	
  	printf("This is my frist program\n");
  	printf("\nEnter the principle amount:");
  	scanf("%f",&principle);
  	printf("\nEnter the rate of interest:");
  	scanf("%f",&rate);
  	printf("\nEnter the time period:");
  	scanf("%f",&time);
  	Si=(principle*rate*time)/100;
  	printf("simple interest =%f",Si);
  	
  	return 0;
  	
 }
