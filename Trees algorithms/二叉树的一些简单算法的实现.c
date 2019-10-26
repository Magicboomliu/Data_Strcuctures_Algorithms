// 主要讲二叉树的构建以及二叉树元素寻找，二叉树求深度，二叉树求宽度，复制二叉树等等操作
# include <stdio.h>
// 定义好 二叉树的结构体
typedef struct BTNode  
{
	char data; // 数据节点
	struct BTNode* lchild;  // 左孩子指针
	struct BTNode* rchild;  // 右孩子指针
	
} BTNode;




//
Task1  根据一个前序序列建立一颗二叉树
// 注意此序列所有空子树的位置都用一个'#'占位,假设他们已经存在了一个数组里面

void CreateBTree(BTNode* &p, char seq [])
{ 
	//建立一个新的遍历节点
    BTNode * q;
    q=p;
    // 如果这个节点非空，那么申请空间，给他赋值，如果为空，那么没有这个结点
	for(i = 0;i<seq.length,i++)
	{
		if (seq[i]!='#')
		{		
			q=(BTNode*)malloc(sizeof(BTNode));
			q->data = seq[i]
		 }
     else{
     	q = NULL;
     }
     CreateBTree(q->lchild);
     CreateBTree(q->rchild);}
}

//
Task2 复制一个二叉树
// 仍然使用前序遍历的方法

void CopyBTree(BTNode* oldtree,BTNode* newtree)
{
  // 递归返回点	
  if (oldtree==NULL){
   newtree =NULL;}
   
  else{
   	// 递归操作
   	oldtree->data = newtree->data;
    // 递归入口
   	CopyBTree(oldtree->lchild,newtree->lchild);
   	CopyBTree(oldtree->rchild,newtree->rchild);}
}

//
Task3 求一个二叉树的深度
Algorithms:  求一个结点的左子树的深度m,然后再求一个结点右子树的深度n,则这个树的深度应该
             就等于 max(m,n)+1(根节点本身)
// 继续使用前序遍历进行操作
// 注意，递归程序中一般不会出现while语言
void getDeepth(BTNode* p)
{

// 如果结点为空结点，那么深度为0
if (p=NULL){
 return 0;
}

else{
//求左子树与右子树的深度
m = getDeepth(p->lchild);
n = getDeepth(p->rchild);
if (m>n){return m+1;}
if (m<=n){return n+1;}
}

}

// 
Task4 找到二叉树中结点取值为k的那个结点
// 我们依旧可以使用前序递归序列
// 首先判断根节点的值是否是那个结点，如果是的可以直接返回，
// 如果不是，我们可以继续遍历左子树与右子树
BTNode *getNode(BTNode* root, char key) // key即为要寻找的那个值
{   
	BTNode * node;
	if(root==NULL){
		node = NULL;
	}
	else{
     if (root->data==key){ node = root;}
     
     else{
     	getNode(root->lchild);
     	getNode(root->rchild)
     
     }
    return node
	}
}

//
Task5 寻找二叉树中第k个结点
//继续使用前序遍历
BTNode *getKthNode(BTNode *root , int key)
{      
	N=0;
	BTNode* node;
 if (root==NULL){

 	return NULL
 }
 else{
 	N++;
 	if(N==key){node=root} 
    else
    {
    getKthNode(root->lchild);
    getKthNode(root->rchild);
    }
 }

}












