#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
void menu( )
{
	printf("************************\n");
	printf("*********1.����*********\n");
	printf("*********2.����*********\n");
	printf("*********0.�˳�*********\n");
	printf("************************\n");
}

void LeftSlue(char arr[ ],int sz)
{
	int i;
	int k=0;
	printf("������Ҫ�������ַ���:");
	scanf("%d",&k);
	k=k%sz;
			while(k--)
		  {
			char tmp=arr[0];
             for(i=0;i<sz;i++)
			   {
			        arr[i]=arr[i+1];
				}
			 arr[sz-1]=tmp;
		   }
		

}

void RightSule(char arr[],int sz )
{
	int i;
	int k=0;
	printf("������Ҫ�������ַ���:");
	scanf("%d",&k);
	k=k%sz;
	while(k--)
		{
			char tmp=arr[sz-1];
             for(i=sz-1;i>=0;i--)
			   {
			        arr[i]=arr[i-1];
				}
			 arr[0]=tmp;
		}		
}

void print(char arr[ ],int  sz)
{
	int i=0;
	printf("-------------------\n");
	for(i=0;i<sz;i++)
	{
		printf("%c ",arr[i]);
	}
	printf("\n");
	printf("-------------------\n");
}

int main()
 {
	 int input=0;
	  
	 
	 do
	 {
		 char arr[6]="abcdef";
		 int sz=sizeof(arr)/sizeof(arr[0]);
		 menu( );
		 scanf("%d",&input);
		 switch(input)
		 {
		 case 1:
			 LeftSlue(arr,sz);
			 print(arr,sz);
			 break;
		 case 2:
			 RightSule(arr,sz);
			 print(arr,sz);
			 break;
		 case 0:
			 break;
		 default:
			 printf("�������!\n");
			 break;
		 }
	 }while(input);
  return 0;
 }