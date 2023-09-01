//program div
#include<stdio.h>
int main()
{
	int num1,num2,add,mul,div,sub;
	printf("enter 1st number\t");
	scanf("%d",&num1);
	printf("enter 2nd number\t");
	scanf("%d",&num2);
	sub=num1-num2;
	add=num1+num2;
	mul=num1*num2;
	div=num1/num2;
	printf("add of these numbers is\t %d\n",add);
   printf("sub of these numbers is\t %d\n",sub);
	printf("mul of these numbers is\t %d\n",mul);
	printf("div of these numbers is\t %d\n",div);
	return 0;
	
}
