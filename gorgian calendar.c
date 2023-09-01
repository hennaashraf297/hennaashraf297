#include<stdio.h>
int main()
{

int ldays,fday,yr;
 int ndays,tdays;

printf("enter the year\n");

scanf("%d",&yr);

ndays= (yr-1)*365;

ldays=(yr-1)/4- (yr-1)/100+(yr-1)/400;

tdays=ndays+ldays;

fday=tdays%7;

if(fday==0)

printf("monday");

if(fday==1)

printf("tuesday");

if(fday==2)

printf("wednesday");

if(fday==3)

printf("thursday");

if(fday==4)

printf("friday");

if(fday==5)

printf("saturday");

if(fday==6)

printf("sunday");

return 0;

}
