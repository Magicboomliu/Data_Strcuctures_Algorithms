邻接表的存储图

1.首先用一个列表来存储顶点，顶点包括2个信息
（1）vecname: 顶点的名称 (char)
（2）firstarc: 顶点的指向的一个结点的指针
2. 构造相关结点的结构，由2个部分构成
（1）advex:被指向，值为元素的下标
（2）一个指针nextarc 指向下一个元素

#define MaxVec 100;
# define Maxweight 9888;
//定义顶点的数据结构
typedef struct VNode
{
	char vecname;  //顶点的名称
	//指向的第一个结点的下标的指针
	struct  VNode* firstarc;
	
}VNode;
// 定义连接点的数据结构
typedef struct ArcNode
{
	// 对应的下标
	int advex;
	// 指向的下一个结点的下标的指针
	struct ArcNode* nextarc;
	//对应的权重
	float weight;

}ArcNode;

typedef struct 
{   
	// 邻接表的顶点数目与边数
  int vecnum;
  int arcnum;
  //构建一个顶点的数组
  VNode vec[MaxVec];	
}ALGrahp;

//////////////////////////////////////////////////////////////////////
exp1:
构建一个无向有权图（UDWG）（using adjacency list）
//////////////////////////////////////////////////////
ALGrahp CreateUDWG(ALGrahp & G)
{
//输入顶点的数目与边的数目
cin>>G.vecnum>>G.arcnum;
//初始化顶点的列表
for(int i=0;i<G.vecnum;i++)
{
    cin>>G.vec[i].vecnum;
    G.vec[i].firstarc=NULL;
}
// 记录所有顶点的信
for(int j=0;j<G.arcnum;j++){
// 输入两个相连的向量名字以及中间的权重
  cin>>V1>>V2>>W；
//得到位置信息
  int i = getLocation(V1,G.Vec);
  int j = getLocation(V2,G.Vec);
// 生成对应的结点
  ArcNode* node1 = (ArcNode*)malloc(sizeof(ArcNode));
//结点分别存储相关的信息 
  node1->advex= j;
  node1->weight=W;
  node1->nextarc->NULL;

  ArcNode* node2 = (ArcNode*)malloc(sizeof(ArcNode));
  node2->advex = 1;
  node2->nextarc = NULL;
  node2->weight=W;

// 若此时顶点的firstarc为空，连接他  
  if (G.Vec[i]->firstarc==NULL)
  {G.Vec[i]->firstarc=node1;
// 若此时顶点的firstarc不为空，找到后面结点中nextarc出为空的那个结点,连接他
  	else{ ArcNode* node3;
  		node3=G.Vec[i]->firstarc
  		while (node3->nextarc!=NULL){
  			node3=node3->nextarc;
  		}
  		node3->nextarc=node1;
  		node1->nextarc=NULL;}
  	}
 // 若此时顶点的firstarc为空，连接他 
   if (G.Vec[j]->firstarc==NULL)
   {
   	   {G.Vec[j]->firstarc->node2;}
     
// 若此时顶点的firstarc不为空，找到后面结点中nextarc出为空的那个结点,连接他
    else{ 
    	ArcNode* node4;
  		node4=G.Vec[j]->firstarc
  		while (node4->nextarc!=NULL){
  			node3=node3->nextarc;
  		}
  		node3->nextarc=node2;
  		node2->nextarc=NULL}
   }}
// 返回这个表
   return G;
}


int getLocation(V,Vnode vec[])
{
  n=sizeof(vec)/size(Vnode);
for(int i=0;i<n;i++){

	if (vec[i].vecname==V) return i;
}

}
