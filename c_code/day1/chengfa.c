#include<stdio.h>
int main ()
{
	int i,j,t;
	for(j=1;j<10;j++)
	{
	for(i=1;i<=j;i++)
	{
    t=i*j;
	printf("%d*%d=%d    ",i,j,t);
    }
    printf("\n");
    }
return 0;
}
