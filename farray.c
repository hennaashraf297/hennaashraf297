#include<stdio.h>
//write a program to read ten numbers as floating point numbers and display them using array concept.#include <stdio.h>

int main() {
    float numbers[10];
    int i;

    
    printf("Enter ten floating-point numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

   
    printf("The numbers you entered are:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", numbers[i]); 
    }

    return 0;
}

