
// 二叉树的层次遍历
# include <stdio.h>
// 定义好 二叉树的结构体
typedef struct BTNode  
{
	char data; // 数据节点
	struct BTNode* lchild;  // 左孩子指针
	struct BTNode* rchild;  // 右孩子指针
	
} BTNode;

// 
Task1 层次遍历一颗二叉树(从左到右，从上到下)
Algorithm: 使用队列，首先根元素入队。
           Loop 以下的操作：
           然后元素出队，出队元素的
           左孩子与右孩子入队（如果存在）

void Levelorder(BTNode* root){

	// 首先建立一个环形队列
	BTNode* que[maxsize];
	int font=0; // 队首指针，dequeue elem
	int rear=0; // 队尾指针, enqueue elem
    
    BTNode* p;
    p = root;
    // 根元素入队
    rear = (rear+1)%maxsize;
    que[rear]=p;
    while (p!=NULL||font!=rear){
    // 元素出队
    font = (font+1);
    p =que[font];
    //出队元素的左孩子与右孩子入队
    if (p->lchild!=NULL){
    rear = (rear+1)%maxsize;
    que[rear]=p->lchild;}
    if (p->rchild!=NULL){
    rear = (rear+1)%maxsize;
    que[rear]=p->rchild;}
    }
}

//  
Task2 一个二叉树节点数最多的那一层的层数
Algorithms: 使用二插树的层次遍历法，最开始那一层层数为1，每往下走一层其深度加1
我们需要每个结点记录此时的层数信息，所以我们重新构造一个二叉树的结点结构

// 定义结点结构
typedef struct InfoNode
{
	int layer;
	struct InfoNode* lchild;
	struct InfoNode* rchild;
}InfoNode;

int Maxnodes_layer(InfoNode* root)
{
//建立队列,假设队列足够长

  InfoNode* que[maxsize];
  int font=0;int rear=0;
  if (root!=NULL){
  rear=rear+1;
  que[rear]=root
  que[rear].layer=1
  int cur_layer;
  } 
  InfoNode * temp;
// 初始化最开始的元素层数为1，入队最开始的那个元素,Loop出队，插入新的，新的层次为出队的加1
  while (rear!=font)
  { //出队操作 
    font++;
    temp = que[font];
    cur_layer = temp.layer
   
   // 入队操作 
    if (temp->lchild!=NULL){
    	rear=rear+1;
    	que(rear)=temp->lchild;
    	que(rear).layer=cur_layer+1;}
    if (temp->rchild!=NULL){
    	rear=rear+1;
    	que(rear)=temp->rchild;
    	que(rear).layer=cur_layer+1;}
// 开始遍历每一层的个数，并且找出最大层
 Max = 0
 for(int i =1,i<=cur_layer,==i){
    int n = 0
   for (int j= font,j<=rear,j++)
   {
    if (que[j]==i){n++}

   }
   if (n>Max){Max=n}
 }
}



