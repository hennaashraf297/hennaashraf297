//to calculate area of triangle.
#include<stdio.h>
  int main()
  {
  	float base,altitude,area;
  	printf("Enter value of base");
  	scanf("%f",&base);
  	printf("Enter value of altitude");
  	scanf("%f",&altitude);
  	area=0.5*(base*altitude);
  	printf("area of triangle is %f",area);
  	return 0;
  }
