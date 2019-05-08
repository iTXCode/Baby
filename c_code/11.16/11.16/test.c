#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//int main()
//{
//	int arr[10];
//	printf("%p\n",arr);
//	printf("%p\n",&arr);
//	printf("%p\n",arr+1);
//	printf("%p\n",&arr+1);
//	return 0;
//}


//#include<stdio.h>   //数组指针存放的是数组的地址
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,0};
//	int (*p)[10]=&arr;
//	printf("%p\n",&arr);
//	printf("%p\n",*p);
//	return 0;
//}


//#include<stdio.h>
//
//void print_arr1(int arr[3][5],int row,int col)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		{
//			printf("%d ",arr[3][5]);
//		}
//		printf("\n");
//		
//	}
//	    printf("\n");
//		printf("\n");
//		printf("\n");
//		printf("\n");
//}
//
//
//void print_arr2(int (*arr)[5],int row,int col)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		{
//			printf("%d ",arr[3][5]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int arr[3][5]={1,2,3,4,5,6,7,8,9,0};
//	print_arr1(arr,3,5);
//	print_arr2(arr,3,5);
//	return 0;
//}

//#include<stdio.h>
//char *q=NULL;
//void fun(int arr[])
//{
//	char a[]="hellow bit.";
//	printf("%d\n",sizeof(arr));
//	
//	q=a;
//}
//int main()
//{
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	printf("%d\n",sizeof(arr));
//	fun(arr);
//	printf("%s\n",q);
//	return 0;
//}