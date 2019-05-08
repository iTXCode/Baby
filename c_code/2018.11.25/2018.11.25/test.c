#define _CRT_SECURE_NO_WARNINGS 1



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
//		return ret;
//}
//int main()
//{
//	char arr1[]="abcdefg";
//	char arr2[]="Abcdefg";
//	char arr3[]="abcdefg";
//	int  num;
//	printf("请输入要比较的字符长度num(num<%d):",strlen(arr1)+1);
//	scanf("%d",&num);
//	printf(" %2d\n",strncmp(arr1,arr2,num));  
//	printf(" %2d\n",strncmp(arr1,arr3,num));   
//	printf("%2d\n",strncmp(arr2,arr3,num)); 
//	return 0;
//}
//

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[]="abcdefg";
//	char arr2[]="abcdefG";
//	char arr3[]="abcdefg";
//	printf(" %2d\n",strncmp(arr1,arr2,strlen(arr1)));  
//	printf(" %2d\n",strncmp(arr1,arr3,strlen(arr1)));   
//	printf("%2d\n",strncmp(arr2,arr3,strlen(arr1)));   
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[32]="abcd1234efgh5678";
//	char arr2[32]="abcd1234efgh5678";
//	memmove(arr1+1,arr1,strlen(arr1)+1);
//	printf("arr1数组元素:%s\n",arr1);
//	memmove(arr2,arr2+1,strlen(arr2)+1);
//	printf("arr2数组元素:%s\n",arr2);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>      //模拟实现memmove
//#include<assert.h>
//void *my_memmove(char* ret,const char* dst, int n)
//{
//	char *p=(char *)ret;
//	char *q=(char *)dst;
//	assert(ret);
//	assert(dst);
//	if(p > q && q < p+n)
//	{
//		q=q+n-1;
//		p=p+n-1;
//		while(n)
//		{
//			*p = *q;
//			p--;
//			q--;
//            n--;
//		}
//	}
//	else
//	{
//        while(n)
//		{
//			*p = *q;
//			p++,q++;
//            n--;
//		}
//	}
//	return p;
//
//}
//
//int main()
//{
//	char arr1[32]="abcd1234efgh5678";
//	char arr2[32]="abcd1234efgh5678";
//	my_memmove(arr1+1,arr1,strlen(arr1)+1);
//	printf("arr1数组元素:%s\n",arr1);
//	my_memmove(arr2,arr2+1,strlen(arr2)+1);
//	printf("arr2数组元素:%s\n",arr2);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[]="abcdefg";
//	char arr2[]="abcdefG";
//	char arr3[]="abcdefg";
//	char arr4[]="abcdefg";
//	printf("%d\n",strcmp(arr1,arr2));
//	printf("%d\n",strcmp(arr1,arr3));
//	printf("%d\n",strcmp(arr2,arr3));
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h> 
//
//int my_strcmp(const char* arr1,const char* arr2)
//{
//	int ret=0;
//	assert(arr1);
//	assert(arr2);
//	while( !(ret = *(unsigned char*) arr1 - *(unsigned char* ) arr2 )         //  整形提升
//		&& *arr1)  //两个条件同时满足才执行循环内容
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
//		;   //do nothing 
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[]="123abcd";
//	char arr2[]="123Abcd";
//	char arr3[]="123Abcd";
//	printf("%d\n",my_strcmp(arr1,arr2));
//	printf("%d\n",my_strcmp(arr2,arr3));
//    printf("%d\n",my_strcmp(arr3,arr1));
//	return 0;
//}