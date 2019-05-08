#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	
	int arr[num]={0};
	int* p=NULL;
	int i=0;
    scanf("%d",&num);
	p=(int *)malloc(num*sizeof(int));
	if(p  !=NULL)//ÅÐ¶ÏpÊÇ·ñÎª¿Õ
	{
		
		for(;i<num;i++)
		{
			*(p+i)= 0;
		}
	}
	free(p);
	p=NULL;
	return 0;
}
