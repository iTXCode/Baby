#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>

 
#define MAXSIZE 100
#define FALSE 0

typedef struct BiTreeNode
{
    char data;
    struct BiTreeNode *Left;
    struct BiTreeNode *Right;
}BiTreeNode,*BiTree;
 

void menu(  )                     //打印菜单，供用户选择要执行的功能。

{
    printf("\n");
	printf("**************************\n");
	printf("*******1.按先序遍历*******\n");
	printf("*******2.按中序遍历*******\n");
	printf("*******3.按后序遍历*******\n");
	printf("*******0. 推出程序 *******\n");
	printf("**************************\n");
	 printf("\n");
}
void CreateBiTree(BiTree *T)             //创建二叉树
{
    char tree;                                   //定义的tree变量用来接收创建二叉树时输入的字符
    scanf("%c",&tree);
    if(tree == ' ')
        *T = NULL;  
    else
    {
        *T = (BiTree)malloc(sizeof(BiTreeNode));
        (*T)->data = tree;
        CreateBiTree(&(*T)->Left);
        CreateBiTree(&(*T)->Right);
    }
}
 
 

void PreOrderTravel(BiTree T)                //先序遍历二叉树
{
    if(T==NULL)
       return; 
    printf("%c ",T->data);
    PreOrderTravel(T->Left);
    PreOrderTravel(T->Right);
}
 

void InOrderTravel(BiTree T)                //中序遍历二叉树
{
    if(T==NULL)
        return;
    InOrderTravel(T->Left);
    printf("%c ",T->data);
    InOrderTravel(T->Right);
}
 

void TailOrderTravel(BiTree T)          //后序遍历二叉树 
{
    if(T==NULL)
        return;
    TailOrderTravel(T->Left);
    TailOrderTravel(T->Right);
    printf("%c ",T->data);
}



int main()
{
	int input;
    BiTree T;
	printf("创建二叉树：");
	CreateBiTree(&T);
	do
	{	
		menu( );
		printf("please enter your choice:");
		scanf("%d",&input);
           switch(input) 
        {   
		   
		   case 1 : printf("先序方式遍历结果：");
			   PreOrderTravel(T);
               printf("\n");
                break;
           case 2 :printf("中序方式遍历结果：");
               InOrderTravel(T);
               printf("\n");
               break;
           case 3 :printf("后序方式遍历结果：");
               TailOrderTravel(T);
               printf("\n");
	           break;
	       case 0:
		       printf("退出程序\n");
			   break;
		   default:
			   printf("输入错误！请重新输入.\n");
            }//end of switch
	  }while(input);
    return 0;
}
