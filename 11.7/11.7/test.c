#define _CRT_SECURE_NO_WARNINGS 1
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//例如：给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0. 


//#include<stdio.h>
//
//void LeftSlue(char arr[ ],int sz)
//{
//	int i;
//	int k=0;
//	printf("请输入要左旋的字符数:");
//	scanf("%d",&k);
//	k=k%sz;
//			while(k--)
//		  {
//			char tmp=arr[0];
//             for(i=0;i<sz;i++)
//			   {
//			        arr[i]=arr[i+1];
//				}
//			 arr[sz-1]=tmp;
//		   }
//		
//
//}
//void print(char arr[ ],int sz)
//{
//	int i;
//	for(i=0;i<sz;i++)
//	{
//		printf("%c",arr[i]);
//	}
//	printf("\n");
//}
//int Judgement(char arr1[] ,char arr2[], int sz)
//{
//    int i;
//	for(i=0;i<sz;i++)
//	{
//		if(arr1[i]==arr2[i])
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	
//}
//int main()
//{
//	char s1[ ]="abcdef";
//	char s2[ ]="bcdefa";
//	int ret=0;
//	int sz=sizeof(s1)/sizeof(s1[0]);
//    LeftSlue(s1,sz);
//	print(s1,sz);
//	ret=Judgement(s1,s2,sz);
//	if(ret==0)
//	{
//		printf("两字符串不相等>\n");
//	}
//	else
//	{
//		printf("两字符串相等>\n");
//	}
//
//	return 0;
//}


//#include<stdio.h>
//
//int count_one_bits(unsigned int n)
//{
//    int count=0;
//	int i=0;
//	for(i=0;i<32;i++)
//	{
//      if(((n>>i)&1)==1) 
//	  {
//		  count++;
//	  }
//	}
//	return count;
//}
//int main()
//{
//	int n=0;
//	int ret = 0;
//	printf("请输入要判断的数:");
//	scanf("%d",&n);
//    ret=count_one_bits(n);
//	printf("%d\n",ret);
//    return 0;
//}



//#include<stdio.h>
//
//void DigitSum(int n)
//{
//	if(n>9)
//	{
//		DigitSum(n/10);
//		printf("%d ",n%10);
//	}
//	else
//		printf("%d ",n);//打印每一位
//}
//
//int main()
//{
//    int n=0;
//	scanf("%d",&n);
//	DigitSum(n);
//	printf("\n");
//	return 0;
//}
//
//
//
//
//
