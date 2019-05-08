#define _CRT_SECURE_NO_WARNINGS 1

//
//#include<stdio.h>
//
//int main()
//{
//	int n=10;
//	int a[n];
//	return 0;
//}


//#include<stdio.h>  //模拟实现memcpy
//#include<string.h>
//#include<assert.h>
//void my_memcpy( char* arr2, const char *arr1,int n)
//{
//	char* ret=arr2;
//	const char* dst=arr1;
//	assert(arr1);
//	assert(arr2);
//	while(n)
//	{
//		*ret=*dst;
//		ret++;
//		dst++;
//		n--;
//	}
//}
//
//int main()
//{
//	char arr1[]="1234abcd    ";
//	char arr2[32];
//	my_memcpy(arr2,arr1,strlen(arr1)+1);
//	printf("arr2数组元素为:%s\n",arr2);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	const char arr1[]="If you really want it!";
//	char arr2[32];
//	printf("arr2数组元素:%s\n",memmove(arr2,arr1,strlen(arr1)+1));
//	return 0;
//}