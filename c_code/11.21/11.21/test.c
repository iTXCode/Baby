#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//#include<assert.h>
//
//void my_strcpy (char *arr2,const char *arr1)
//{
//	const char* ret=arr1;
//	char* dst=arr2;
//	assert(arr2);
//	assert(arr1);
//	while(*ret)
//	{
//		*dst=*ret;
//		dst++;
//		ret++;
//	}
//	*dst=*ret;//将'\0'赋给目标字符串
//	printf("%s\n",arr2);
//}
//
//
//int main( )
//{
//	const char arr1[ ]="I am a good boy!";
//	char arr2[32];
//	my_strcpy(arr2,arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//
//
//void my_strcat( char *arr1,const char *arr2)
//{
//    char* ret=arr1;
//    const char* dst=arr2;
//	assert(arr1);
//	assert(arr2);
//    while(*ret)
//	{
//		ret++;
//	
//	}
//		while(*dst)
//	 {
//		*ret = *dst;
//		dst++;
//		ret++;
//	}
//	*ret=*dst;
//	printf("%s\n",arr1);
//}
//
//int main()
//{
//    char arr1[32]="I am a ";
//	const char arr2[]="good student!";
//	my_strcat(arr1,arr2);
//	return 0;
//}
//


//#include<stdio.h>   //模拟实现strstr
//#include<string.h>
//#include<assert.h>
//
//char *my_strstr(const char* arr1,const char* arr2)
//{
//	
//	const char* ret= arr1;
//    const char* dst= arr2;
//	assert(arr1);
//	assert(arr2);
//	while(*ret)
//	{
//		ret=arr1;
//		dst=arr2;
//       while(*ret && *dst && *ret == * dst )
//	   {
//		   dst++;
//		   ret++;
//	   }
//	   if(*dst =='\0') 
//	   {
//           return (arr1);
//	   }
//	   arr1++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	const char arr1[]="123abc123edf";
//	const char arr2[]="1234";
//	const char *ret=my_strstr(arr1,arr2);
//	printf("%s\n",ret);
//	return 0;
//}

//
////#include<stdio.h>
////#include<string.h>
////int main()
////{
////	char arr1[]="abc1231234edfg";
////	char arr2[]="1234";
////	printf("%s\n",strstr(arr1,arr2));
////    return 0;
////}
////


//#include<stdio.h>
// int main()
// {
//        int a=0;
//	 int b=1;      
//	 int c=2;      
//	 int d=a && b&&c;  //结果为假 
//	 /* 此时a为假，不用再计算后面的表达式，此表达式逻辑为假*/ 
//	 int e=b&&c;//为真
//	 printf("%d\n",d);
//	 printf("%d\n",e);
//     return 0;
// }

//#include<stdio.h>   //360笔试题
//
//
//int main()
//{
//	int  i=0,a=0,b=2,c=3,d=4;
//	i=a++ &&  ++b && d++;
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n i=%d\n",a,b,c,d,i);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>  //模拟实现strcmp
//
//int my_strcmp(const char* arr1,const char* arr2)
//{
//	int ret=0;
//	assert(arr1);
//	assert(arr2);
//	while(!(ret=*(unsigned char*)arr1-*(unsigned char* )arr2)
//		&& *arr1)
//	{
//		arr2++;
//		arr1++;	
//	}
//	if(ret<0)
//		return -1;
//	else if(ret>0)
//		return 1;
//	else
//	{
//		;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[]="123Abcd";
//	char arr2[]="123Abcd";
//	printf("%d\n",my_strcmp(arr1,arr2));
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
//	printf("%s\n",arr2);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[32]="1234abcd";
//	//char arr2[32];
//	memmove(arr1+1,arr1,strlen(arr1)+1);
//	printf("%s\n",arr1);
//	return 0;
//}