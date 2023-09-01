//write a program to find the greatest number in an array of integer elements
#include <stdio.h>


int findGreatestNumber(int arr[], int n) {
    if (n <= 0) {
        return -1;  
    }

    int greatest = arr[0];  
    for (int i = 1; i < n; i++) {
        if (arr[i] > greatest) {
            greatest = arr[i];
        }
    }

    return greatest;
}

int main() {
    int arr[] = {12, 45, 67, 23, 9, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findGreatestNumber(arr, n);

    if (result != -1) {
        printf("The greatest number in the array is: %d\n", result);
    } else {
        printf("The array is empty.\n");
    }

    return 0;
}

