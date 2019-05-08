#define _CRT_SECURE_NO_WARNINGS 1

//
//#include<stdio.h>
//#include<string.h>   //模拟实现strcpy(拷贝)
//
//void Mystrcpy(char arr[],char brr[] , int sz )
//{
//	int i=0;
//	for(;i<=sz;i++)
//	{
//		arr[i]=brr[i];
//	} 
//}
//
//int main()
//{
//	char arr[100];
//	char brr[]="I am a student.";
//	int sz=strlen(brr);
//	printf("%d\n",sz);
//	Mystrcpy(arr,brr,sz);
//	printf("%s\n",arr);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100];
//	char brr[]="I am a student.";
//	strcpy(arr,brr);
//	printf("%s\n",arr);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100]="I am ";
//	char brr[]="a student.";
//	strcat(arr,brr);
//	printf("%s\n",arr);
//	return 0;
//}

//#include<stdio.h>           //模拟实现strcat(拼接)
//#include<string.h>
//
//void Mystrcat(char arr[], char brr[],int se, int sz)
//{
//	int  i=se;
//	int j=se+sz;
//	int x=0;
//	for(;i<=j;i++)
//	{
//	   arr[i]=brr[x];
//	   sz++;
//	   x++;
//	}
//   printf("%s\n",arr);
//}
//
//int main()
//{
//	char arr[30]="I am ";
//	char brr[]="a student.";
//	int se=strlen(arr);
//	int sz=strlen(brr);
//    Mystrcat(arr,brr,se,sz);
//	return 0;
//}



//#include<stdio.h>   //2.喝汽水，1瓶汽水1元，
//                      //2个空瓶可以换一瓶汽水， 
//                      //给20元，可以多少汽水。
//int Add(int  num)
//{
//	int count=num;
//	int tmp=num;
//	while(tmp>=2)
//	{
//			count+=tmp/2;
//		   tmp=tmp/2+tmp%2;
//	}
//	return count;
//}
//
//int main()
//{
//	int num;
//	printf("请输入你所拥有的资产数目：");
//	scanf("%d",&num);
//	printf("你一共喝了%d瓶可乐\n",Add(num));
//	return 0;
//}
//
//
//
//
#include<stdio.h>

void Search(int arr[],int sz,int *q)
{
	int j;
	while(sz--)
	{
		for(j=0;j<sz;j++)
		{
			if(*q != arr[j+1])
			{
				j++;
				if(j=sz-1)
				{
					printf("%d ",*q);
					q++;
				}

			}
		}
	}
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10,11,9,8,7,6,5,4,3,2,1};
	int sz=sizeof(a)/sizeof(a[0]);
	int *p;
	p=&a[0];
	Search(a,sz,p);
	return 0;
}