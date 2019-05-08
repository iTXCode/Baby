#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  n;
	scanf("%d",&n);
	int *p=NULL;
    p=(int *)malloc(n*sizeof(int));
	int arr[n]={0};
	free(*p);
	return 0;
}
