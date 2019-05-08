#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
// void Init(int arr[],int sz)
// {
//	 int i;
//	 for(i=0;i<sz;i++)
//	 {
//          arr[i]=2;
//		
//	 }
//	 
// }
// void Empty( int arr[],int sz)
// {
//	 int i;
//	 for(i=0;i<sz;i++)
//	 {
//		 arr[i]=0;
//	 }
// }
// void Print(int arr[],int sz)
// {
//	 int i;
//	 for(i=0;i<sz;i++)
//	 {
//	     printf("%d",arr[i]);
//	 }
//	 printf("\n");
// 
// }
//void Init2(int arr[], int sz)
//{
//	int i;
//	for (i=0;i<sz;i++)
//	{
//		arr[i]=i;
//	}
//}
// void Reverse(int arr[],int sz)
// {
//     int left = 0,right= sz-1;
//	 while(left<right)
//	 {
//		 int tmp=arr[left];
//		 arr [left]=arr [right];
//		 arr [right]= tmp;
//		 left++;
//		 right--;
//	 }
//	
// }
//
//
//int main()
//{
//	int a[10]={0};
//	int sz=sizeof(a)/sizeof(a[0]);
//    Init(a,sz);
//	Print(a,sz);
//	Empty(a,sz);
//	Print(a,sz);
//	Init2(a,sz);
//	Print(a,sz);
//	Reverse(a,sz);
//	Print(a,sz);
//	return 0;
//}