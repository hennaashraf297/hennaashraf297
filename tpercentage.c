#include<stdio.h>
  int main()     {
  	float mark1,mark2,mark3,mark4,mark5,total,percentage;
  	printf("Enter mark1 =");         
	scanf("%f",&mark1);
	
  	printf("Enter mark2 =");         
	scanf("%f",&mark2);
	
  	printf("Enter mark3 =");        
	 scanf("%f",&mark3);
	 
  	printf("Enter mark4 =");          
	scanf("%f",&mark4);
	
  	printf("Enter mark5 =");         
	 scanf("%f",&mark5);
	 
  	total=mark1+mark2+mark3+mark4+mark5;
  	percentage=(total/500)*100.0;
  	printf("Percentage is %f",percentage);
  	return 0;
  	
  }
