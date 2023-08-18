#include<stdio.h>
void main()
{
	void fahrenheit(float c);
	float c;
	printf("enter the temperature in celcius");
	scanf("%f",&c);
	fahrenheit(c);
}
void fahrenheit(float c)
{
	printf("\n the temperature %0.2f celcius = %0.2f fahrenheit",c,(9*c)/ 5+32);
	return;
}
