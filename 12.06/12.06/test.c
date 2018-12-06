#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[]="abcdef";
//	printf("%d\n",sizeof(a));//7
//    printf("%d\n",sizeof(a+0));//4
//	printf("%d\n",sizeof(*a));//1
//	printf("%d\n",sizeof(a[1]));//1
//	printf("%d\n",sizeof(&a));//4
//	printf("%d\n",sizeof(&a+1));//4
//	printf("%d\n",sizeof(&a[0]+1));//4
//	printf("%d\n",strlen(a));  //6
//    printf("%d\n",strlen(a+0));//1
//	//printf("%d\n",strlen(*a));//报错
//	//printf("%d\n",strlen(a[1]));//报错
//	//printf("%d\n",strlen(&a));//整个数组的长度
//	//printf("%d\n",strlen(&a+1));
//	//printf("%d\n",strlen(&a[0]+1));//5
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char *p="abcdef";
//	printf("%d\n",sizeof(p));      //4
//	printf("%d\n",sizeof(p+1));    //4
//	printf("%d\n",sizeof(*p));     //1
//	printf("%d\n",sizeof(p[0]));   //1
//	printf("%d\n",sizeof(&p));     //4
//	printf("%d\n",sizeof(&p+1));   //4
//	printf("%d\n",sizeof(&p[0]+1));//4
//	printf("%d\n",strlen(p)); //6
//	printf("%d\n",strlen(p+1));//5
//    //printf("%d\n",strlen(*p));//警告
//	//printf("%d\n",strlen(p[0])); //警告
//	//printf("%d\n",strlen(&p));//告警
//	//printf("%d\n",strlen(&p+1));//警告
//	//printf("%d\n",strlen(&p[0]+1));//5
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a[3][4]={0};
//	printf("%d\n",sizeof(a));  //48
//	printf("%d\n",sizeof(a[0][0]));//4
//	printf("%d\n",sizeof(a[0]));//16
//	printf("%d\n",sizeof(a[0]+1));//4
//	printf("%d\n",sizeof(*a[0]+1));//4
//	printf("%d\n",sizeof(a+1));//4
//	printf("%d\n",sizeof(*(a+1)));//16
//	printf("%d\n",sizeof(&a[0]+1));//4
//	printf("%d\n",sizeof(*(&a[0]+1)));//16
//	printf("%d\n",sizeof(*a));//16
//	printf("%d\n",sizeof(a[3]));//16
//	return 0;
//}