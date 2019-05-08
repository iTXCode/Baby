#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
// int fun(int n)
// {
//	 if(n>=3)
//		return  n=fun(n-1)+fun(n-2);
//	  else 
//		  return 1;
// }
//
//int main()
//
//{
//	int a[ ]={0};
//
//	int n=0;
//	scanf("%d",&n);//1 1 2 3 5 8 13 21 34 55 
//	printf("%d\n",fun(n));
//    return 0;
//}

//
//#include<stdio.h>
//
//int main()
//
//{
//	int i=1;
//	int j=1;
//	int sum=0;
//	int n=0;
//	scanf("%d",&n);
//	if(n<=2)
//		sum=1;
//	else
//		while(n>2)
//	{
//		sum=i+j;
//		j=i;
//		i=sum;
//		n--;
//	}
//	printf("%d\n",sum);
//    return 0;
//}


//#include<stdio.h>
//
//int fun(int n,int k)
//{
//	if(k!=0)
//	{
//		return  n * fun(n,k-1);
//	}
//	else
//		return 1;   //n^0=1
//}
//
//int main()
//{
//    int n=0;
//	int k=0;
//	int ret=0;
//	printf("please enter n=");
//	scanf("%d",&n);
//	printf("please enter k=");
//	scanf("%d",&k);
//	ret = fun(n,k);
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



//#include<stdio.h>
//
//int fun1(int n)
//{
//	if(n>=2)
//		return n * fun1(n-1);
//	else
//		return 1;
//}
//int fun2(int n)
//{
//	int i=0;
//	int j=1;
//	for(i=1;i<=n;i++)
//	{
//		j=j*i;
//	}
//	return j;
//}
//
//int main()
//
//{
//	int n=0;
//	scanf("%d",&n);
//	fun1(n);
//	fun2(n);
//	printf("%d\n",fun1(n));
//	printf("%d\n",fun2(n));
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char ch=''
//    reverse_string(char * string)
//	return 0;
//}



//#include<stdio.h>
//
//int  DigitSum(int n)
//{
//	if(n<10)
//	{
//		return n;
//	}
//	else
//	{
//		return n%10+DigitSum( n/10);
//	}
//}
//
//int main()     //递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//{
//    int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret=DigitSum(n);
//	printf("%d\n",ret);
//	return 0;
//}
//


//#include<stdio.h>
//#include<string.h>
//
//void reverse_string(char ch[],int left, int right)
//{
//	while(left<right)
//	{
//	    char tmp=ch[left];
//		ch[left]=ch[right];
//		ch[right]=tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char ch[]="abcdefgh";
//	int sz = strlen(ch);
//    reverse_string(ch,0,sz-1);
//	printf("%s\n",ch);
//	return 0;
//}


//
//#include<stdio.h>
//int my_strlen(char *p)
//{
//	if(*p !='\0')
//	{
//		return 1+my_strlen(p+1);
//	}
//	else
//		return 0;
//}
//int main()
//
//{
//	char a[ ]="abcdefgh";
//	printf("%d\n",my_strlen(a));
//	return 0;
//}

//
//#include<stdio.h>
//
//int my_strlen(char *p)
//
//{
//	int i=0;
//    while(*p !='\0')
//	{
//		p++;
//         i++;
//	}
//	return i;
//}
//
//int main()
//{
//	int ret=0;
//	char arr[ ]="abcdefghj";
//	ret=my_strlen(arr);
//	printf("%d\n",ret);
//	return 0;
//}