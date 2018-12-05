#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main( )
//{
//	int i,j;
//	int tmp=0;
//	int a[10];
//	printf("ÇëÊäÈë10¸öÊý>");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<9;i++)
//	{
//		for(j=0;j<9-i;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//			    tmp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=tmp;
//			}
//		}
//	}
//		for(i=0;i<10;i++)
//	   {
//		printf("%d ",a[i]);
//	   }
//      printf("\n");
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int a[]={1,2,3,4}; 
//	printf("%d\n",sizeof(a));  //16
//	printf("%d\n",sizeof(a+0));//4
//	printf("%d\n",sizeof(*a));//4
//	printf("%d\n",sizeof(a+1));//4
//	printf("%d\n",sizeof(a[1]));//4
//	printf("%d\n",sizeof(&a));//4
//	printf("%d\n",sizeof(*&a));//16
//	printf("%d\n",sizeof(&a+1));//4
//	printf("%d\n",sizeof(&a[0]));//4
//	printf("%d\n",sizeof(&a[0]+1));//4
//	return 0;
//}


#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="abcdef";
	//printf("%d\n",sizeof(a));      //7
	//printf("%d\n",sizeof(a+0));    //4
	//printf("%d\n",sizeof(*a));     //1
	//printf("%d\n",sizeof(a[1]));   //1
	//printf("%d\n",sizeof(&a));     //4
	//printf("%d\n",sizeof(&a+1));   //4
	//printf("%d\n",sizeof(&a[0]+1));//4
	//printf("%d\n",strlen(a));
	//printf("%d\n",strlen(a+0));
	//printf("%d\n",strlen(*a));//´í
	//printf("%d\n",strlen(a[1]));//´í
    //printf("%d\n",strlen(&a));
	//printf("%d\n",strlen(&a+1));
	//printf("%d\n",strlen(&a[0]+1));   //5
	//printf("%d\n",strlen(*a[0]));//´í
	return 0;
}