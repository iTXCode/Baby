#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//struct A
//{
//	char a;
//	int i;
//	char c;
//};
//int main()
//{
//	printf("%d\n",sizeof(struct A));
//	return 0;
//}

//#include<stdio.h>
//
//struct B
//{
//	char a;
//	char b;
//	int c;
//};
//int main()
//{
//	printf("%d\n",sizeof(struct B));
//	return 0;
//}
//#include<stdio.h>
//struct C
//{
//	int a;
//	char b;
//	char c;
//};
//int main()
//{
//	printf("%d\n",sizeof(struct C));
//	return 0;
//}
//#include<stdio.h>
//struct D
//{
//	double a;
//	char b;
//	int c;
//
//};
//struct E
//{
//	char d;
//	struct D e;
//	double f;
//	int  g;
//	char h[3];
//	char *i;
//	void (*j)(int);
//};
//int main()
//{
//	printf("%d\n",sizeof(struct E));
//	return 0;
//}
//#include<stdio.h>
//
//union A
//{
//	char a[5];
//	int i;
//};
//int main()
//{
//	printf("%d\n",sizeof(union A));
//	return 0;
//}



#include<stdio.h>
union B
{
	short c[7];
	int i;
};
int main()
{
	printf("%d\n",sizeof(union B));
	return 0;
}
