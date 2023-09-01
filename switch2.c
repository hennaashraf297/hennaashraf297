#include<stdio.h>
main()
{int m;
printf("enter monthy no.(1-12)");
scanf("%d",&m);
switch (m)
   {
    case 1:
      printf("jan,31 days");
      break;

    case 2:
     printf("feb,28 days");
      break;
    case 3:
     printf("march,31 days");
      break;

    case 4:
      printf("april,30 days");
      break;
	 case 5:
      printf("may,31 days ");
      break;

    case 6:
      printf("june,30 days");
      break;
	 case 7:
      printf("july,31 days");
      break;

    case 8:
      printf("aug,30 days");
      break;
	 case 9:
      printf("sept,31 days");
      break;

    case 10:
      printf("oct,30 days");
      break;
	 case 11:
      printf("nov,31 days");
      break;

    case 12:
      printf("dec,30 days");
      break;  
    default:
      printf("invalid");
   }
return 0;
}
	
