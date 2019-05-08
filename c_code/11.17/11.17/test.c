#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#pragma pack()
//struct A
//{
//    char a;
//	double i;
//	char b;
//	int o;
//	double m;
//	int d;
//	char f[5];
//	char* g;
//	void (*h)(int);
//};
//int main()
//{
//	printf("%d\n",sizeof(struct A));
//	return 0;
//}



//#include <stdio.h>
//
//
//struct A
//{
//	char name[20];
//	int age ;
//	char sex[5];
//	char id[20];
//};
//int main()
//{
//	printf("%d\n",sizeof(struct A));
//	return 0;
//}



//#include<stdio.h>
//
//struct A
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n",sizeof(struct A));
//	return 0;
//}



//#include<stdio.h>
//
//struct A
//{
//	double d;
//	char c;
//	int i;
//};
//struct B
//{
//	char c1;
//	struct A A;    //struct A 大小占16字节，
                    //而其对齐数位其内部的最大对齐数（8字节）。
//	double y;
//};
//int main()
//{
//	printf("%d\n",sizeof(struct B));
//	return 0;
//}

//#include<stdio.h>
//
//struct A
//{
//	double d;
//	char c;
//	int i;
//};
//struct B
//{
//	char c1;
//	struct A A;
//	double y;
//	int e;
//	char f[3];
//	char *g;
//	void (*h)(int);
//};
//int main()
//{
//	printf("%d\n",sizeof(struct B));
//	return 0;
//}
