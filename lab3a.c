#include <stdio.h>
int main()
{
	int num,d1,d2,d3,sum;
	printf("enter a 3-digit number");
	scanf("%d",&num);
	d1=(num/100);
	d2=(num/10)%10;
	d3=(num)%10;
	sum=d1+d2+d3;
	printf("sum of digits is%d\n",sum);
	return 0;
}
