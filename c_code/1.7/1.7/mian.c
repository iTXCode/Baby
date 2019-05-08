#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

typedef struct TreeNode{
	char data;
	struct TreeNode *left;
	struct TreeNode *right;
} TreeNode;


void InitFindVal(TreeNode* val)
{
	assert(val != NULL);
	val->data = 0;
	val->left = NULL;
	val->right = NULL;
}
void CreateBiTree(TreeNode **T)             //创建二叉树
{
	char tree;                                   //定义的tree变量用来接收创建二叉树时输入的字符
	scanf("%c", &tree);

	if (tree == '#')
		(*T)= NULL;
	else
	{
		(*T) = (TreeNode*)malloc(sizeof(TreeNode));
		(*T)->data = tree;
		CreateBiTree(&(*T)->left);
		CreateBiTree(&(*T)->right);
	}
}
void Printf(TreeNode* root)
{
	if (root == NULL){
		return;
	}
	printf("%c",root->data);
	Printf(root->left);
	Printf(root->right);

}
struct TreeNode* Find(TreeNode* root, char value)
{
	assert(root!= NULL);
	struct TreeNode* L;
	struct TreeNode* R;
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == value)
		return root;
	L = Find(root->left, value);
	if (L != NULL)
	{
		return L;
	}
	R = Find(root->right, value);
	if (R != NULL)
	{
		return R;
	}
	else
	{
		return NULL;
	}
}
void test()
{
	TreeNode *val;
	char N;
	CreateBiTree(&val);
	Printf(val);
	printf("\n");
	scanf("%c",&N);
    TreeNode *find_result=Find(val,N);
	printf("%c", find_result->data);
}
int main()
{
	test();
	return 0;
}