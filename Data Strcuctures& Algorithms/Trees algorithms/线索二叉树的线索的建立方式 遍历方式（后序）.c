 线索二叉树的线索的建立方式（后序）
 # include <stdio.h>
// 定义好 二叉树的结构体
typedef struct TBTNode  
{
	char data; // 数据节点
	struct TBTNode* lchild;  // 左孩子指针
	struct TBTNode* rchild;  // 右孩子指针
	int ltag; int rtag;
} TBTNode;

//同样使用二叉树后序遍历的框架
void CreateTBTtree(TBTNode* root,TBTNode* &prev)
{

   CreateTBTtree(root->lchild,prev);
   CreateTBTtree(root->rchild,prev);
   if (p->lchild == NULL)
    {
    	p->ltag ==1;
    	p->lchild = prev;
    }
    if (prev!=NUll && prev->rchild==NULL){
    	prev->rtag==1;
    	prev->rchild =p;
    }

    prev=p;
}