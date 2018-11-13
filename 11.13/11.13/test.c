#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//void Inspect(int arr[ ],int  *p,int sz)
//{
//	int  i;
//	int j;
//	while(sz-1)
//	{
//			for (i=0;i<sz;i++)
//			{
//               if(*p==arr[i+1])
//			   {
//				   p+=2;
//			   }
//			   else
//			   {
//                  for(j=i;j<sz;j++) 
//				  {
//
//				  }
//			   }
//			   
//			}
//			sz--;
//	}
//}
//int  main()
//{
//	int arr[ ]={0,1,2,3,4,5,6,7,8,9,7,6,5,4,3,2,1,0};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	Inspect(arr,p,sz);
//	printf("%d\n",sz);
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//void Mystrcpy(char b[], char *p,int sz)
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)
//		{
//		   b[i] = *p;
//		   printf("b[%d]=%c ",i,b[i]);
//		   printf("\n");
//		   p++;
//		}
//}
//int main( )
//{    
//	char arr[ ]="abcdefg";
//	char b[ ]=" ";
//	char *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	Mystrcpy(b,p,sz);
//	system("pause");
//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//void Mystrcat( char arr[ ], char brr[ ],int s1,int s2)
//{
//	
//}
//
//int main()
//{
//	char arr[ ]="I am a";
//	char brr[]="student";
//	int s1=strlen(arr);
//	int s2=strlen(brr);
//	Mystrcat(arr,brr,s1,s2);
//	//printf("%d ",s1);
//	//printf("%d ",s2);
//	return 0;
//}



//
//#include<stdio.h>
//
//int main()
//{
//	char a=-3;
//	unsigned char b=-3;
//	unsigned int c=a;
//    unsigned int d=b;
//	printf("%d\n",c);
//	printf("%u\n",c);
//	printf("%u\n",d);
//	printf("%d\n",d);
//	return 0;
//}