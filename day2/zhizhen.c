#include<stdio.h> 
int main()
{
	int a,b;
	int *p1,*p2; 
	scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    printf("a=%d,b=%d\n",a,b);
   {p1=&b;p2=&a;}
    printf("a=%d,b=%d\n",*p1,*p2);	
	return 0;
}
