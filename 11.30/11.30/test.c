#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n=10;
//	int a[n]={0};
//	int i=0;
//	int* p= NULL;
//	p=(int *)malloc(n*sizeof(int));
//	for(i=0;i<n;i++)
//	{
//		a[i]=i;
//		printf("%d ",a[i]);
//	}
//	free(p);
//	p=NULL;
//	printf("\n");
//	return 0;
//}


//
//#include<stdio.h>     //模拟实现strncat
//#include<string.h>
//#include<assert.h>
//
//void my_strncat(char *arr, const char *arr1,int n)
//{
//	char *p=arr;
//	char *q=(char *)arr1;
//	assert(arr);
//	assert(arr1);
//	while(*p )
//	{
//        p++;
//	}
//	while(n--)
//	{
//      *p=*q;
//	  p++;
//	  q++;
//	}
//	*p='\0';
//	printf("%s",arr);
//	printf("\n");
//}
//
//int main()
//{
//	char arr[32]="I am a ";
//	const char arr1[]="good student!";
//	int num;
//	printf("请输入要拼接字符长度(num<%d):",strlen(arr1)+1);
//	scanf("%d",&num);
//	my_strncat(arr,arr1,num);
//	return 0;
//}
//
//


#include<stdio.h>
#include<string.h>

int main()
{
	char arr[32]="I am a";
	char arr1[]=" good student!";
	printf("%s\n",strncat(arr,arr1,strlen(arr1)+1));
	return 0;
}