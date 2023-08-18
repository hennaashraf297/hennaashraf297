#include<stdio.h>
void change(int*num)
{
	printf("before adding value inside function num=%d",*num);
	(*num) += 100;
	printf("after adding value inside function num=%d",*num);
}
int main()
{
	int x=100;
	printf("before function call x=%d",x);
	change(&x);
	printf("after function call x=%d",x);
	return 0;
}
