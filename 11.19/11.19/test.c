#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>

//void test(int arr[])
//{
//}
//void test(int arr[10])
//{
//}
//void test(int *arr)
//{
//}
//void test2 (int *arr[20])
//{
//}
//void test2(int **arr)
//{
//}
//int main( )
//{
//	int arr[10]={0};
//	int *arr2[20]={0};
//	test(arr);
//	test2(arr2);
//	return 0;
//}


//#include<stdio.h>
//void test(int arr[3][5])//ok
//void test(int arr[][])//no
//void test(int arr[][5])//ok
////二维数组传参时，函数形参只能省略第一个[]中的数字
////因为对一个二维数组，可以不知道有多少行，但必须知道一行有多少元素
//void test(int *arr)//no
//void test(int* arr[5])//no
//void test(int(*arr)[5])//ok
//void test(int **arr)//no
//int main()
//{
//	int  arr[3][5]={0};
//	return 0;
//}

//
//#include<stdio.h>
//
//void test(int **pr)
//{
//	printf("num=%d\n",**pr);
//}
//
//int main()
//{
//	int n=10;
//	int *p=&n;
//	int **pr=&p;
//	test(pr);
//	test(&p);
//	return 0;
//}

//#include<stdio.h>
//void fun(int arr[])            //arr[],arr[10],*arr都可以，此时[]中的数字是被忽略的。
// {
//     printf("%d\n",sizeof(arr));
// }
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,0};
//    printf("%d\n",sizeof(arr));
//    fun(arr);
//    return 0;
//}
//#include<stdio.h>
//    char *q=NULL;
//    void fun(int arr[])
//    {
//    	char *s="hellow bit.";
//    	printf("%d\n",sizeof(arr));
//    	
//    	q=s;
//    }
//    int main()
//    {
//    	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//    	printf("%d\n",sizeof(arr));
//    	fun(arr);
//    	printf("%s\n",q);
//    	return 0;
//    }
//#include<stdio.h>
//    char *q=NULL;
//    void fun(int arr[])
//    {
//    	char a[]="hellow bit.";
//    	printf("%d\n",sizeof(arr));
//    	
//    	q=a;
//    }
//    int main()
//    {
//    	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//    	printf("%d\n",sizeof(arr));
//    	fun(arr);
//    	printf("%s\n",q);
//    	return 0;
//    }
//#include<stdio.h>
//    #include<string.h>
//    
//    int main()
//    {
//    	char str1[]="hellow bit.";
//    	char str2[]="hellow bit.";
//    	char *str3="hellow bit.";
//    	char *str4="hellow bit.";
//    	if(str1 == str2)
//    		printf("str1 and str2 are same.\n");
//    	else 
//    		printf("str1 and str2 are not same. \n ");
//    	if(str3==str4)
//    		printf("str3 and str4 are same.\n");
//    	else
//    		printf("str3 and str4 are not sanme.\n");
//    	return 0;
//    }

//#include<stdio.h>
//
//int main()
//
//{
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	printf("sizeof(arr)=%d\n",sizeof(arr));
//	printf("sizeof(arr+1)=%d\n",sizeof(arr+1));
//	return 0;
//}
  /*#include<stdio.h>
    int main()
    {
           int arr[10]={0};
           printf("    arr= %p\n",arr);
           printf("   &arr= %p\n",&arr);
           printf("  arr+1= %p\n",arr+1);
           printf(" &arr+1= %p\n",&arr+1);
           return 0;
    }*/
 /*#include<stdio.h>
    void test(int **pr)
    {
    	printf("num=%d\n",**pr);
    }
    
    int main()
    {
    	int n=10;
    	int *p=&n;
    	int **pr=&p;
    	test(pr);
    	test(&p);
    	return 0;
    }*/



//#include<stdio.h>
//#include<assert.h>
//
//void my_strcpy(char *p, char *q)
//{
//	assert(p != NULL);
//	assert(q != NULL);
//	while (*p++ = *q++)
//	{
//		printf("%c",*p);
//		printf("%c",*q);
//	}
//   
//}
//int main()
//{
//	char a[32]="0";
//	char b[]="I am a good boy!";
//	char *p=&a[0];
//	char *q=&b[0];
//	my_strcpy(p,q);
//	printf("%s\n",&b);
//	return 0;
//}