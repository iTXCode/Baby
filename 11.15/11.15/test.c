#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//
//void Findsingle(int arr[], int n)
//{
//	int data=arr[0];
//	int i=1;
//	while(i<n)
//	{
//		data^=arr[i];
//		i++;
//		n--;
//	}
//	printf("%d\n",data);
//}
//
//int main()
//{
//	int arr[]={1,2,3,4,5,3,2,1};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int *p;
//	p=arr;
//	Findsingle(arr,sz);
//	return 0;
//}


//day16
////1.#include<stdio.h>
////#include<string.h>   //模拟实现strcpy(拷贝)
////
////void Mystrcpy(char arr[],char brr[] , int sz )
////{
////	int i=0;
////	for(;i<=sz;i++)
////	{
////		arr[i]=brr[i];
////	} 
////}
////
////int main()
////{
////	char arr[100];
////	char brr[]="I am a student.";
////	int sz=strlen(brr);
////	printf("%d\n",sz);
////	Mystrcpy(arr,brr,sz);
////	printf("%s\n",arr);
////	return 0;
////}
////2.
////#include<stdio.h>           //模拟实现strcat(拼接)
////#include<string.h>
////
////void Mystrcat(char arr[], char brr[],int se, int sz)
////{
////	int  i=se;
////	int j=se+sz;
////	int x=0;
////	for(;i<=j;i++)
////	{
////	   arr[i]=brr[x];
////	   sz++;
////	   x++;
////	}
////   printf("%s\n",arr);
////}
////
////int main()
////{
////	char arr[30]="I am ";
////	char brr[]="a student.";
////	int se=strlen(arr);
////	int sz=strlen(brr);
////    Mystrcat(arr,brr,se,sz);
////	return 0;
////}
////




//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	const char arr1[]="I am a good student!";
//    const char arr2[]="a good ";
//	printf("%s\n",strstr(arr1,arr2));
//	return 0;
//}


//#include<stdio.h>
//
//void MyStrstr( char *p, char *q)
//{
//		while(*q!='\0')
//		{
//			if(*p == *q)
//	        {
//			  printf("%c\n",*q);
//			  q++;
//		    }
//			else
//			q++;
//	     }
//
//}
// 
//int main()
//{
//	 char arr1[]="I am a good student!";
//	 char arr2[]="a good";
//	 char *p;
//	 char *q;
//	 p=&arr2[0];
//	 q=&arr1[0];
//	MyStrstr(p,q);
//	return 0;
//}

//#include<stdio.h>
//void fun(int arr[])
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
