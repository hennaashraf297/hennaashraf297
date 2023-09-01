#include<stdio.h>  
  
void fib(int);  
  
int main()  
{  
    int l;  
  
    printf("Enter the number of terms to be printed\n");  
    scanf("%d", &l);  
  
    fib(l);  
  
    return 0;  
}  
  
void fib(int num)  
{  
    int n1 = 0, n2 = 1, n3, c;  
  
    printf("\nFibonacci Series ..\n");  
    printf("1. %d\n2. %d\n", n1, n2);  
  
    for(c = 3; c <= num; c++)  
    {  
        n3 = n1 + n2;  
        printf("%d. %d\n", c, n3);  
  
        n1 = n2;  
        n2 = n3;  
    }  
}  
