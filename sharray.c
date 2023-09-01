//write a program to find the shortest number in an array of integer elements.
#include <stdio.h>


int findShortestNumber(int arr[], int n) {
    if (n <= 0) {
        return -1; 
    }

    int shortest = arr[0];  

    
    for (int i = 1; i < n; i++) {
        if (arr[i] < shortest) {
            shortest = arr[i];
        }
    }

    return shortest;
}

int main() {
    int arr[] = {12, 45, 2, 67, 9, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findShortestNumber(arr, n);

    if (result != -1) {
        printf("The shortest number in the array is: %d\n", result);
    } else {
        printf("The array is empty.\n");
    }

    return 0;
}

