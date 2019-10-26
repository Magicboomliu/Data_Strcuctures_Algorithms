//        二叉树的存储结构，以及前序，中序、后序的递归与非递归实现

// 定义二叉树的节点
typedef struct BTNode  
{
	char data; // 数据节点
	struct BTNode* lchild;  // 左孩子指针
	struct BTNode* rchild;  // 右孩子指针
	
} BTNode;

// 二叉树的递归遍历算法

//定义一个vist算法打印出当前的节点
void Visit(BTNode* p){
	printf("%s\n",p->data );
}

// 1. 前序遍历 （根，左，右）
void preorder(BTNode* p){

if (p!=NULL)
{
  Visit(p);
  preorder(p->lchild);
  preorder(p->rchild);
}
}

// 2. 中序遍历 （左 根 右）

void inorder(BTNode* p)
{
if (p!=NULL)
{
inorder(p->lchild);
Visit(p);
inorder(p->rchild);
}

}

//3. 后序遍历 （左、右、根）
void postorder(BTNode* p){

if (p!=NULL)
{
	postorder(p->lchild);
	postorder(p->rchild);
	Visit(p)
}
}

// 树的非递归遍历

// 1. 非递归的前序遍历 需要使用栈
void Preorder_nonrecursion(BTNode *p)

{ 
 if (p!=NULL){
 	// 首先建立栈，用来存储
  BTNode * Stack[maxsize];
  int top = -1
  // 将树根元素入栈
  Stack[++top] = p;
  // 栈不为空
  while(top!=-1){
   // 出栈一个元素
   BTNode * q;
   q = Stack[top--];
   Visit(q);
   //如果右子树不为空，出栈元素的右子树入栈,
   //右子树先入栈，左子树后入栈。这样出栈时，先出栈左，后出栈右
   if (q->rchild!=NULL){Stack[++top]=q->rchild;}
   if (q->lchild!=NULL){ Stack[++top]=q->lchild;}
   // 没有左右子树情况下，出栈
  }	
}
 }


// 2 非递归的中序遍历二叉树
void inorder_nonrecursion(BTNode* p){
// 首先判断这个树存不存在
    // 建立一个stack，实现调用
    BTNode * Stack[maxsize];
    int top =-1;
    BTNode * q;
    q=p;
    // 如果节点不为空或者出列不为空
    while(q!=NULL||top!=-1)
    {
    //结点不为空，则入栈，并且指向其左节点

    if (q!=NULL){
     Stack[++top]=q;
      q=q_>lchild;}

    // 结点为空，证明其双亲结点应该是个（相对）左子树叶结点。
    //改元素出栈，并且指向其右孩子 
    else{
     q = Stack[--top];
     Visit(q);
     q=q_>rchild;}

 }

// 3. 后序遍历非递归算法

后序遍历的序列与前序遍历的序列存在着一定的关系：
---后序遍历的逆序列正好是按照（根、右，左）遍历二叉树而得到的结果。
------因此，我们只需要按上面遍历方式得到序列然后区逆就是后序遍历的结果。
需要2个栈，一个遍历，一个取逆。

void postorder_nonrecursion(BTNode* p){
if (p!=NULL){
  //建立栈, 一个用来遍历，一个用来取逆
	BTNode* Stack_tra[maxsize];
	int top_tra = -1;
	BTNode* Stack_pos[maxsize];
	int top_pos = -1;
 
	BTNode* q = NULL;
	q = p;
	Stack_tra[++top_tra] = q;
	
	while(top_tra!=-1){
	//出栈一个元素,立刻入新栈
	q = Stack_tra[--top_tra];
	Stack_pos[++top_pos] = q;
	// 左右依次进栈，出栈时就会先出右，然后是左
	if(q->lchild! = NULL){
		Stack_tra[++top_tra] = q->lchild;
	}
	if(q->rchild! = NULL){
        Stack_tra[++top_tra] = q->rchild;
	}// when the loop is done,either the traversal
//  对遍历结果取反，其实就是把 Stack_pos清栈
   while(top_pos!=1){ 
   	q=Stack_pos[--top_pos];
   	Visit(q);
   }
	}
}

}




