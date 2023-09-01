//swapping without using third variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter A ");
	scanf("%d",&a);
	printf("enter B");
	scanf("%d",&b);
	a=a+b;
   b=a-b;
	a=a-b;
	printf("now A=%d and B=%d",a,b);
	return 0;
}
