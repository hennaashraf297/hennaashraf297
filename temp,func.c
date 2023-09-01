#include <stdio.h>
void main()
{
void F(float c);
float c;
printf("\nEnter the Temperature in Celcius : ");
scanf("%f", &c);
F(c);
}
void F(float c)
{
printf("\nThe Temperature %0.2f Celcius = %0.2f Fahrenheit.", c, ( 9 * c) / 5 + 32);
return 0;
}
