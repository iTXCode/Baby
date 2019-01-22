#include<stdio.h>
int main(void)
{
	int year, leap;

for(year=1000;year<2000;year++) 
	
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	    leap=1;
      else
		leap = 0;

	if (leap=1)
		printf("%d is year ", year);
    else
		printf("%d is not ", year);
	return 0;
}
