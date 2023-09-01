#include <stdio.h>
int main()
{
	int num,d1,d2,d3,d4,d5,rev;
	printf("enter 5-digit number");
	scanf("%d",&num);
	d1=(num/10000);
	d2=(num/1000)%10;
	d3=(num/100)%10;
	d4=(num/10)%10;
	d5=(num%10);
	rev=d5*10000+d4*1000+d3*100+d2*10+d1;
	printf("reverse of digits is:%d\n",rev);
	if (num==rev)
	{
	   printf("this num is palindrome.\n");
	}
	else 
	{
		printf("it is not palindriome.\n");
	}
	return 0;
}
