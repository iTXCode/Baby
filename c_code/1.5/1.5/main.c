#define _CRT_SECURE_NO_WARNINGS 1

//前序遍历
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *array;
int size;
void PreorderTraversal(struct TreeNode* root)
{
    if(root==NULL)
    {return;}
    array[size++]=root->val;
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
    
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
  array=(int *)malloc(sizeof(int)*100*1000);
    size=0;
    PreorderTraversal(root);
    *returnSize = size;
    return array;
    
}


//中序
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *array;
int size;
void InorderTraversal(struct TreeNode *root){
    if(root == NULL)
        return ;
    InorderTraversal(root->left);
    array[size++]=root->val;
     InorderTraversal(root->right);   
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    array=(int*)malloc(sizeof(int));
    size=0;
    InorderTraversal(root);
    *returnSize=size;
    return array;
    free(array);
}

//后序遍历
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
    int *array;
int size;
void  PostorderTraversal(struct TreeNode* root)
{
    if(root==NULL)
    {return;}
    
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    array[size++]=root->val;
    
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
  array=(int *)malloc(sizeof(int)*100*1000);
    size=0;
    PostorderTraversal(root);
    *returnSize = size;
    return array;
    
}


//判断两个二叉树是否相等 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p==NULL && q==NULL){ 
        return true;
     }
    if(p==NULL|| q==NULL){
        return false;
    }
    return p->val==q->val
        &&isSameTree(p->left,q->left)
        &&isSameTree(p->right,q->right);
}
     
//两颗树是否互为镜像|对称
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool SameTree(struct TreeNode* p, struct TreeNode *q){
    if(p==NULL&&q==NULL){
        return true;
    }
    if(p==NULL||q==NULL){
        return false;
    }
    return p->val==q->val
        &&SameTree(p->left,q->right)
         &&SameTree(p->right,q->left);
}
    
bool isSymmetric(struct TreeNode* root) {
    if(root==NULL){
        return true;
    }
    return SameTree(root->left,root->right);
}

//查找子树
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool SameTree(struct TreeNode *p,struct TreeNode *q){
    if(p==NULL&&q==NULL){
        return true;
    }
    if(p==NULL||q==NULL){
        return false;
    }
    return p->val==q->val
        &&SameTree(p->left,q->left)
        &&SameTree(p->right,q->right);
}
bool preorderTrave(struct TreeNode*root,struct TreeNode *t){
    if(root==NULL){
        return false;
    }
    
    //根
    if(root->val==t->val && SameTree(root,t)){
        return true;
    }
    //左子树
    bool left=preorderTrave(root->left,t);
    
    if(left==true){
        return true;
    }
    //右子树
    bool right=preorderTrave(root->right,t);
    return right;
}
bool isSubtree(struct TreeNode* s, struct TreeNode* t) {
    if(s==NULL&&t==NULL){
        return true;
    }
    return preorderTrave(s,t);
}

//求最大深度

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    int left=maxDepth(root->left);
    int right=maxDepth(root->right);
    return (left>right?left:right)+1;
}
