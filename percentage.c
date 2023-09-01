//calculate % marks of a student by taking input (5 sub)
#include <stdio.h>
int main()
{ 
       int mth,chem,phy,eng,evs;
       float total,percentage;
       printf("Enter the marks obtained in Mathematics");
       scanf("%d",&mth);
		 printf("Enter the marks obtained in Chemistry");
       scanf("%d",&chem);
       printf("Enter the marks obtained in Physics");
       scanf("%d",&phy);
       printf("Enter the marks obtained in English");
       scanf("%d",&eng);
       printf("Enter the marks obtained in EVS");
       scanf("%d",&evs);
     total=mth+chem+phy+eng+evs;
     percentage=(total/500)*100;
       printf("Percentage=%f", percentage);
       return 0;
}
