#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char str1[]="hellow bit.";
//	char str2[]="hellow bit.";
//	char *str3="hellow bit.";
//	char *str4="hellow bit.";
//	if(str1 == str2)
//		printf("str1 and str2 are same.\n");
//	else 
//		printf("str1 and str2 are not same. \n ");
//	if(str3==str4)
//		printf("sr3 and str4 are same.\n");
//	else
//		printf("str3 and str4 are not sanme.\n");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//int arr[10]={0};
//printf("    arr= %p\n",arr);
//printf("   &arr= %p\n",&arr);
//printf("  arr+1= %p\n",arr+1);
//printf(" &arr+1= %p\n",&arr+1);
//return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(arr+1));
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int (*p)[10]=&arr;
//	printf("%d\n",sizeof(p+1));
//	printf("%d\n",sizeof(p+2));
//	return 0;
//}


//#include<stdio.h>
//
//void print_arr1(int arr[3][5],int row, int col)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//}
//void print_arr2(int arr[3][5],int row, int col)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[3][5]={1,2,3,4,5,6,7,8,9,0};
//	print_arr1(arr,3,5);
//	print_arr2(arr,3,5);
//	return 0;
//}


//#include<stdio.h>
//void print_arr1(int (*arr)[5],int row, int col)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//}
//void print_arr2(int (*arr)[5],int row, int col)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[3][5]={1,2,3,4,5,6,7,8,9,0};
//	print_arr1(arr,3,5);
//	print_arr2(arr,3,5);
//	return 0;
//}



//#include<stdio.h>    //一级指针传参
//
//void print(int *p, int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	print(p,sz);
//	return 0;
//}