#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

int run_year(int sun)

{
	
	int i;
	if(sun%4==0 && sun%100 !=0 || sun%400==0)
	{
		i=1;
	}
	else
	{i=0;}

	return (i);
	
}

int main()
{
	int year,c;
	scanf("%d",&year);
	c = run_year(year);
	if(c==1)
		printf("%d������\n",year);
	else
		printf("%d��������\n",year);
    return 0;
}