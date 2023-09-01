#include<stdio.h>
main()
{int m;
printf("enter monthy no.(1-12)");
scanf("%d",&m);
switch (m)
   {
    case 1:
      printf("jan");
      break;

    case 2:
     printf("feb");
      break;
    case 3:
     printf("march");
      break;

    case 4:
      printf("april");
      break;
	 case 5:
      printf("may");
      break;

    case 6:
      printf("june");
      break;
	 case 7:
      printf("july");
      break;

    case 8:
      printf("aug");
      break;
	 case 9:
      printf("sept");
      break;

    case 10:
      printf("oct");
      break;
	 case 11:
      printf("nov");
      break;

    case 12:
      printf("dec");
      break;  
    default:
      printf("invalid");
   }
return 0;
}
	
