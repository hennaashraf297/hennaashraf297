#include<stdio.h>
int main()
{
int ram,sham,ajay;

printf("Enter the age of Ram, Shyam and Ajay respectively : ");
scanf("%d%d%d", &ram,&sham,&ajay);

if(ram<sham && ram<ajay)
	printf("\n\nRam is youngest among all.");
else if(sham<ram && sham<ajay)
	printf("\n\nShyam is youngest among all.");
else
	printf("\n\nAjay is youngest among all.");
return 0;
}
