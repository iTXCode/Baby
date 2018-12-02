#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n] ;
	int *p = NULL;
	p = (int *)malloc(n * sizeof(int));
	int i = 0;
	for (i = 0; i < n; i++)
	{
		a[i] = i;
		printf("%d ",a[i]);
	}
	free(p);
	printf("\n");
	return 0;
}