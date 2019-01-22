#include<stdio.h> 
int main()
{
	int a[3],i ,j,max;
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	for(j=0;j<3;j++)
	for(i=0;i<3-j;i++)
	{
		if(a[i]<a[i+1])
		{
	    max=a[i+1];a[i+1]=a[i];a[i]=max;
		}
	}
	for(i=0;i<3;i++)
printf("%5d",a[i]);
	return 0;
}
