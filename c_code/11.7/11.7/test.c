#define _CRT_SECURE_NO_WARNINGS 1
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ����� 
//���磺����s1 =AABCD��s2 = BCDAA������1������s1=abcd��s2=ACBD������0. 


//#include<stdio.h>
//
//void LeftSlue(char arr[ ],int sz)
//{
//	int i;
//	int k=0;
//	printf("������Ҫ�������ַ���:");
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
//		printf("���ַ��������>\n");
//	}
//	else
//	{
//		printf("���ַ������>\n");
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
//	printf("������Ҫ�жϵ���:");
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
//		printf("%d ",n);//��ӡÿһλ
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
