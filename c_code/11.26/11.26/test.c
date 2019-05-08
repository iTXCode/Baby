#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//void my_strcat( char* arr1, const char* arr2,int n)
//{
//	char* p = arr1;
//	char* q =(char *)arr2;
//	assert(arr1);
//	assert(arr2);
//	p = p + n;
//	while( *q!= '\0')
//	{
//		*p = *q;
//		p++;
//		q++;
//		
//	}
//	*p = *q;
//	printf("%s\n",arr1);
//
//}
//
//
//int main()
//{
//	char arr1[32]="I am a";
//	const char arr2[]=" good boy!";
//	int n=strlen(arr1);
//	my_strcat(arr1,arr2,n);
//	return 0;
//}



//#include<stdio.h>
//#include<assert.h>
//
//char *my_strcpy(char* b, const char* arr)
//{
//	char* p = b;
//	char* q =(char *)arr;
//	assert(b);
//	assert(arr);
//	while(*q != '\0')
//	{
//		*p = *q;
//		p++;
//		q++;
//	}
//	*p = *q;
//	return b;
//}
//
//int main()
//{
//	const char arr[]="I am a good student!";
//	char b[32];
//	printf("%s\n",my_strcpy(b,arr));
//	return 0;
//}

//#include<stdio.h>
//struct S
//{
//	char a:2;
//	char b:3;
//	char c:6;
//	char d:7;
//};
//
//
//int main()
//{
//	printf("%d\n",sizeof(struct S));   //3
//	return 0;
//}



//#include<stdio.h>
//struct S
//{
//	int a:2;
//	int b:3;
//	int c:6;
//	int d:7;
//};
//
//
//int main()
//{
//	printf("%d\n",sizeof(struct S));   //4
//	return 0;
//}



//#include<stdio.h>
//union Un
//{
//	int i;
//	char c;
//};
//union Un un;
//int main()
//{
//	//printf("%d\n",&(un.i));
//	//printf("%d\n",&(un.c));
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n",un.i);
//	return 0;
//}

//#include<stdio.h>
//union Un
//{
//	int i;
//	char c;
//}x;
//
//int main()
//{
//	
//	x.i=1;
//	printf("%x\n",x.c);
//	return 0;
//}


//#include<stdio.h>
//union Un1
//{
//	int i;
//	char a[5];
//};
//
//
//union Un2
//{
//	short a[7];
//	int b[8];
//	
//};
//int main()
//{
//	
//	printf("%d\n",sizeof(union Un1));
//	printf("%d\n",sizeof(union Un2));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//
//int main()
//{
//	char arr1[]="I am a good boy!";
//	char arr2[20];
//	int n=strlen(arr1);
//	printf("%s\n",strncpy(arr2,arr1,n+1));
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>     //Ä£ÄâÊµÏÖstrncpy
//
//void my_strncpy( char *brr,
//				const char *arr,
//				int n)
//{
//	 char* p= brr;
//	 const char* q= arr;
//	 while(n--)
//	 {
//		 *p=*q;
//		 p++;
//		 q++;
//	 }
//	 printf("%s",brr);
//
//}
//
//
//int main()
//{
//	const char arr[]="I am a good boy!";
//	char brr[20];
//    my_strncpy(brr,arr,strlen(arr)+1);
//	printf("\n");
//	return 0;
//}