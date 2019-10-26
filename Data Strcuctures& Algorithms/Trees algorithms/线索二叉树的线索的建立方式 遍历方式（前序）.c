 线索二叉树的线索的建立方式 遍历方式（前序）
//

# include <stdio.h>
// 定义好 二叉树的结构体
typedef struct TBTNode  
{
	char data; // 数据节点
	struct TBTNode* lchild;  // 左孩子指针
	struct TBTNode* rchild;  // 右孩子指针
	int ltag; int rtag;
} TBTNode;

Algorithm : 
  When the left child is NULL, set the ltag=1. and the lchild pointer links 
the preNode of the current node, when the left child exists,set the tag=0,and 
the lchild pointer links the ture left child;
  When the right child is NULL, set the ltag=1. and the rchild pointer links 
the nextNode of the current node, when the right child exists,set the tag=0,and 
the rchild pointer links the ture right child;
// 使用二叉树的递归框架进行操作
-------------------------------------------------------------------------------------
Task1(a1) 建立前序二叉树的线索
// 刚开始时传入的prev一定是NULL ，因为root的prev==NULL
void CreateTBT(TBTNode* root, TBTNode* &prev)
{
 if (root!=NULL){	
//如果当前结点的左子树为空，那么设置 ltag=1,lchild指向前驱结点
 if (root->lchild==NUll){

 	root->ltag = 1;
 	root->lchild = prev;
 }
 //保证前驱结点不为空， 前驱结点为root,设置其为rtag=1
 if (prev!=NULL && prev->rchild==NULL){
 	prev->rtag=1;
 	prev->rchild=root;
 }

//prev向前移动
 prev = root;
 Visit(prev);
 //注意递归入口的限制
 if (root->ltag==0){
 	CreateTBT(root->lchild,prev);
 }
 if (root->rtag==0){
 	CreateTBT(root->rchild,prev)
 }
 }
}
//引用函数调用
int  main()
{
	TBTNode* p; //假设这个树已经定义好了
	TBTNode* prev=NULL;
	CreateTBT(p,prev);
	//最后一个结点（prev)的后继为空，且没有孩子，也将其rtag设置为1
	prev.rchild = NULL;
	prev.rtag = 1
}

//
Task1(a2) 遍历前序线索二叉树
Algorithm: 这个算法中，首先需要找到第一个结点，然后需要找到下一个结点

// TNTNode由于是前序遍历，所有第一个结点就是根节点
TBTNode* getFirstElem(TBTNode* root){
 if (root!=NULL){
   return root;
 }}

//给出一个任意结点，如果他的左孩子存在，则下一个结点就是他的左孩子
 //如果左孩子不存在，下一个结点一定是rchild指向的那个结点（可能是右孩子，可能是隔空后继）。
 TBTNode* getNextElem(TBTNode* p){
 	TBTNode * new;
 	new = p;
 	if (new!=NULL){
 		if(new->lchild!=NULL){
 			new=new->lchild;}
 		else{
 			new=new->rchild;
 		}}
    return new;
 }

 void Threadtravesal(TBTNode* root){
  TBTNode* p;
   p=root;
 if (p!=NULL){ 
 	Visit(p);
 	p=getNextElem(p); }
 }



