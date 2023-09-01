#include <stdio.h>

int rev(int);

int main(){

    int Num, Rev = 0;   

    printf("\nEnter the number to reverse: ");

    scanf("%d", &Num);   

    Rev = rev (Num);

    printf("Reverse of %d is = %d\n", Num, Rev);

    return 0;

}

int rev (int Num){

    int rem, Rev = 0;    

    while (Num > 0){

        rem = Num %10;

        Rev = Rev *10+ rem;

        Num = Num /10;

    }    

    return Rev;

}
