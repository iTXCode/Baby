#include<stdio.h>
#include<math.h>
int main ()
{
   int n,i,j,m=0;
    for(n=101;n<=200;n=n+2);
    {
	j=sqrt(n);
    for(i=2;i<=j;i++)
    if(n%i==0)
    break;
    if(i>=j+1)
    {
    	printf("%d",n);
    	m=m+1;
    
	}
		if(m%5==0)
    	printf("\n");
	}
	printf("\n");
	return 0;
 } 
