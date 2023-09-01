// program to swap 2 numbers by using third variable
#include <stdio.h>
int main()
{
int a,b,c;
        printf("Enter 1 num A=");
       scanf("%d",&a);
		 printf("Enter 1 num B=");
       scanf("%d",&b);
       c=a;
       a=b;
       b=c;
       printf("now A=%d and B=%d",a,b);
       return 0;
}
