 线索二叉树的线索的建立方式 遍历方式（中序）

 typedef struct TBTNode  
{
	char data; // 数据节点
	struct TBTNode* lchild;  // 左孩子指针
	struct TBTNode* rchild;  // 右孩子指针
	int ltag; int rtag; // tag==0 有孩子，tag==1 做前驱后继pointer。
} TBTNode;
//
Task1(a) 线索二叉树的线索的建立（中序）
//使用中序遍历的框架


void CreateTBTtree(TBTNode* p ,TBTNode* &prev)
{
 CreateTBTtree(p->lchild);
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
 prev=p;

 CreateTBTtree(p->rchild);
}

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
Task1(a2) 遍历中序线索二叉树
Algorithm: 这个算法中，首先需要找到第一个结点，然后需要找到下一个结点

//一个树中序遍历的第一个元素
//如果左子树存在，那么一定是左子树上最左的那个元素
//如果左子树不存在，那就是根节点了

TBTNode* getFirst(TBTNode *root){
 TBTNode* p;
 p=root;
 while(p->ltag==0){
 	p=p->lchild;
 }
return p;}

// 一个结点的下一个要不是就是他的右子树中最左的元素（存在右子树），
//要不然就是他的rchild指针指向的位置（不存在右子树）
TBTNode* getNext(TBTNode *p){
	if(p->rtag==0){
		p=p->child;
		while(p->tag==0){
			p=p->lchild;
		}
	else{
		p=p->rchild;
	}
	}
}

void TBTtreetra(TBTNode* root){

 TBTNode* p;
 p=getFirst(root)

 while(p!=NUll){
 	Visit(p);
 	p=getNext(p);
 }



}