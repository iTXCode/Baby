#define _CRT_SECURE_NO_WARNINGS 1


 
//#include<stdio.h> 
//#include<stdlib.h> 
//#include<math.h> 
//#include<string.h>
//
//
//int cmp1(const void * a, const void * b)
//{
//	return (*(int*)a - *(int*)b);//a>b 返回正值
//} 
//
//int cmp2(const void * a, const void *b)
//{
//	return(*(char*)a - *(char*)b);
//}
//void main(void)
//{
//	int i;
//	int a[10] = { 9, 1, 3, 2, 7, 5, 6, 4, 8, 0 };
//	char b[10] = { 'i', 'g', 'c', 'e', 'd', 'f', 'b', 'h', 'a', 'j' };
//	qsort(a, 10, sizeof(int),cmp1);
//	qsort(b, 10, sizeof(char),cmp2);
//	for (i = 0; i<10; i++)
//		printf("%d ", a[i]);
//	    printf("\n");
//	for (i = 0; i<10; i++)
//		printf("%c ", b[i]);
//	    printf("\n");
//	system("pause");
//}


//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr[32];
//	char arr1[]="I am a good boy!";
//	strncpy(arr,arr1,sizeof(arr1)+1);
//	printf("%s\n",arr);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>     //模拟实现strncpy
//
//void my_strncpy(const char *brr,
//				const char *arr[],
//				int n)
//{
//	 char*p=(char *)brr;
//	 const char* q= arr;
//	 while(n--)
//	 {
//		 *p=*q;
//		 p++;
//		 q++;
//	 }
//	 printf("%s",brr);
//
//}
//
//
//int main()
//{
//	char arr[]="abcdefg1234";
//	char brr[32];
//    my_strncpy(brr,arr,strlen(arr)+1);
//	return 0;
//}


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
//
//


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr1[]="aabbccdd123456";
//	const char arr2[]="aabbccdd12345";
//	printf("%d\n",strncmp(arr1,arr2,9));
//	return 0;
//}


//#include<stdio.h>    //模拟实现strncmp
//#include<string.h>
//#include<assert.h>
//
//int my_strncmp(const char* arr1, const char* arr2,int n)
//{
//	int ret=0;
//	assert(arr1);
//	assert(arr2);
//	
//		while(!(ret=*(unsigned char*)arr1-*(unsigned char* )arr2)
//         && *arr1&& *arr2 && n)
//		{
//          arr1;
//		  arr2;
//		  n--;
//	    }
//
//		if(ret<0)
//		return ret;
//	else if(ret>0)
//		return ret;
//	else
//	{
//		;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[]="Aabbccddeeff";
//	char arr2[]="aabbccddeeff";
//	int  num;
//	printf("请输入要比较的字符长度num(num<%d):",strlen(arr1)+1);
//	scanf("%d",&num);
//	printf("%d\n",my_strncmp(arr1,arr2,num));
//	return 0;
//}