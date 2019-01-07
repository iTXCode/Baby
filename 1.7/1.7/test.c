//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//#define MAXSIZE 100
//#define FALSE 0
//
//typedef struct BiTreeNode
//{
//	char data;
//	struct BiTreeNode *Left;
//	struct BiTreeNode *Right;
//}BiTreeNode, *BiTree;
//
//void CreateBiTree(BiTree *T)             //创建二叉树
//{
//	char tree;                                   //定义的tree变量用来接收创建二叉树时输入的字符
//	scanf("%c", &tree);
//	if (tree == ' ')
//		*T = NULL;
//	else
//	{
//		*T = (BiTree)malloc(sizeof(BiTreeNode));
//		(*T)->data = tree;
//		CreateBiTree(&(*T)->Left);
//		CreateBiTree(&(*T)->Right);
//	}
//}
//int main()
//{
//	BiTree T;
//	printf("创建二叉树：");
//	CreateBiTree(&T);
//	return 0;
//}
