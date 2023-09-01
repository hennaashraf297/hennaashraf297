#include <stdio.h>
int isP(int num)
{
    int temp= num;
    int dig, rev;
    rev= 0;
    while (num > 0) {
        dig = num % 10;
        rev= (rev* 10) + dig;
        num /= 10;
    }

    if (rev== temp)
        return 1;
    else
        return 0;
}

int main()
{
    int numb;

    printf("Enter an integer number: ");
    scanf("%d", &numb);

    if (isP(numb))
        printf("%d is a palindrome.", numb);
    else
        printf("%d is not a palindrome.", numb);

    return 0;
}

