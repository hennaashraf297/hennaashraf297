#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,s,area;
	printf("enter length of side 1:");
	scanf("%lf",&a);
		printf("enter length of side 2:");
	scanf("%lf",&b);
		printf("enter length of side 3:");
	scanf("%lf",&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("the area of triangle:%lf\n",area);
	return 0;
}
