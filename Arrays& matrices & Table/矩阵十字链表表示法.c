
矩阵的十字链表表示法
ONode 结点由5部分构成。
//对应的行坐标row，
//对应的列坐标column，
//对应的值val
//指向下一个同行元素的 right_next指针
//以及指向下一个同列元素的指针down_next
除此之外，还有一个总结点用来保存所有的行与列与非零元素的个数
以及rhead指针指向行头结点列表的一个头结点
以及chead指针指向列结点列表中的第一个列头结点

// 假设矩阵的大小是M N

#define Maxsize 1000;
typedef struct ONode
{   int hx;      // 记录行
	int vx;      // 记录列
	int data;
	struct ONode* right_next;   //左指针
	struct ONode* down_next;    // 下指针
}ONode;

typedef struct CrossList
{
	 int rows;
	 int columns;
	 int nonzeros;
	 struct CrossList* chead;
	 struct CrossList* rhead;
}CrossList;

// m代表矩阵的行数，n代表矩阵的列数
void CreateCrosslis(int A[][Maxsize],int m,int n,int k,CrossList &C)
{
//若不为空，则释放指针连接的空间	
if(C.chead!=NULL){free(C.chead);}
if(C.rhead!=NULL){free(C.rhead);}
// 创建列的头结点（n个）与行的头节点（m个）
C.chead=(ONode*)malloc(sizeof(ONode*n));
C.rhead=(ONode*)malloc(sizeof(ONode*m));
// 创建记录列头结点的辅助变量
ONode* temp_c[n];
for(int j=0;j<n;j++){
temp_c[j]= &C.chead[j];}
}
//用于指向每一列的第一个元素，因为按行访问，行里面第一次出现的一定
//是该列第一次出现的。

for(int i=0;i<m;i++){
// 生成一个访问变量,取行头结点的值
	ONode *r;
	r=(ONode*)malloc(sizeof(ONode));
	r = &C.rhead[i];
//遍历每一个元素
	for (int z=0;z<n;z++){
     if (A[i][j]!=0){
// 如果发现不为0的元素，立即生成新的结点保存，把这个节点与头结点或是其他结点连接      
      ONode* p= (ONode*)malloc(sizeof(ONode));
      p->hx = i;
      p->vx = j;
      p->data = A[i][j]
      r->left = p;
      r=r->left;
      temp_c[j]->down_next = p;
      temp_c[j]=p;
     }

	}
}