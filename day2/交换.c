#include<stdio.h> 
int main ()
{
	int a=10;
	int b=20;
	int c=0;
	printf("a=%d,b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
