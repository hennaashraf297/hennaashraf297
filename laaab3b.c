#include <stdio.h>

int main() {
    int num, rev;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    rev = (num % 10) * 10000
                    + ((num / 10) % 10) * 1000
                    + ((num / 100) % 10) * 100
                    + ((num / 1000) % 10) * 10
                    + (num / 10000);

    printf("Reversed number: %d\n", rev);
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
