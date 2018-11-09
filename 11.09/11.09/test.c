#define _CRT_SECURE_NO_WARNINGS 1

//1.从左到右反转一个数的二进制序列
//#include<stdio.h>
//
//void ReverBits(unsigned int num)
//{
//	int i;
//	for(i=0;i<32;i++)
//	{
//		if(((num>>i)&1)==1)
//		printf("%d ",1);
//		else 
//		printf("%d ",0);
//	}
//}
//int main()
//{
//	int num;
//	scanf("%u",&num);
//	ReverBits(num);
//	return 0;
//}



//#include<stdio.h>
//
//void ReverBits(unsigned int num)
//{
//	int i;
//	for(i=0;i<32;i++)
//	{
//		if(((num<<i)&1)==1)
//		printf("%d ",1);
//		else 
//		printf("%d ",0);
//	}
//}
//int main()
//{
//	int num;
//	scanf("%u",&num);
//	ReverBits(num);
//	return 0;
//}
//
//
//
//


//
//2.不使用（a+b）/2这种方式，求两个数的平均值。 
//#include<stdio.h>
//double Average(int num)
//{
//	double i=0.0;
//	i=num/2.0;
//	return i;
//}
//
//int main()
//{
//	int num1;
//	int num2;
//	double ret=0.0;
//	scanf("%d",&num1);
//	scanf("%d",&num2);
//	if(num1>num2)
//	{
//		ret=Average(num1-num2);
//	   printf("%f",num2+ret);
//	}
//	else
//	{
//		ret=Average(num2-num1);
//	printf("%f",num1+ret);
//	}
//	return 0;
//}



//有一个字符数组的内容为:"student a am i", 
//请你将数组的内容改为"i am a student". 
//#include<stdio.h>
//
//int My_Strlen(char *p)
//{
//	int count=0;
//	while(*p!='\0')
//	{
//        count++;
//		p++;
//	}
//	return count;
//}
//
//void print(char *q)
//{
//	while(*q!='\0')
//	{
//		printf("%c",*q);
//		q++;
//	}
//	printf("\n");
//}
//
//void Reverse(char arr[],int ret)
//{
//	int i=0;
//	char tmp='0';
//	while(ret)
//	{
//     tmp=arr[0];
//	for(i=0;i<ret;i++)
//	{
//		arr[i]=arr[i+1];
//	}
//	arr[ret-1]=tmp;
//	ret--;
//	}
//}
//void LocalReverse1(char arr[])
//{
//	int i=2;
//	char tmp='0';
//	tmp=arr[2];
//	arr[2]=arr[3];
//	arr[3]=tmp;
//
//}
//void LocalReverse2(char arr[],int ret)
//{
//	int i=7;
//	int j=ret-1;
//	int tmp='0';
//	while(i<j)
//	{
//		tmp=arr[i];
//		arr[i]=arr[j];
//		arr[j]=tmp;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	char arr[]="student a am I";
//	int ret=My_Strlen(arr);
//	printf("%d\n",ret);
//	print(arr);
//	Reverse(arr,ret);
//	print(arr);
//	LocalReverse1(arr);
//	print(arr);
//	LocalReverse2(arr,ret);
//	print(arr);
//	return 0;
//}