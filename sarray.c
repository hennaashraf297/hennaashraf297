#include <stdio.h>

int main() {
    int arr[] = {12, 45, 67, 23, 9, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;

   
   for (int i = 0; i < n; i++)
	 {
        sum += arr[i];
    }

    printf("The sum of elements in the array is: %d\n", sum);

    return 0;
}

