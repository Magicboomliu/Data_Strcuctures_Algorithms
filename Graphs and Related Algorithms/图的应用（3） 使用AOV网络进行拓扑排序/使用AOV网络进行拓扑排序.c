//
概念说明：
what is 拓扑？
 拓扑是几何图形或者是空间在连续改变形状后依旧保持不变的一些性质。
以图为例：对于有向无环图DAG(Directed Acyline Graph)而言
想要到达某个点，需要先经过一些点。如A->B->C
我们把复杂的图结构变成一个线性表，但是在线性表中A依然在C前面，这种前后的顺序不会发生变化（拓扑）
这也是拓扑排序要解决的问题。
用途：
 排课问题，上一些课程需要另外一些课程做先导课，有些课不需要先导课，那么怎样安排线性的上课
 顺序，可以合理的上课呢？
 ---使用AOV网进行拓扑排序即可。

 what is AOV？
 Activity on Vertex。即顶点表示活动，边代表活动之间的先后优先关系。

/////////////////////////////////////////////////////////////
 AOV实现拓扑排序的基本算法：
 （1）找到图中入度为0的点（可能有多个，从中任意选一个V输出）
 （2）删除该点V，并且删除与其相关的所有的边。
 重复以上2个步骤，直到所有的点都被输出结束。

 AOV实现的基本数据结构。
 每个点对应的入度是多少，出度是多少，可以使用DFS或是BFS进行遍历。
假设此时，我们已经知道了每个点对应的入度。

每次我们就找入度为0的点入栈他，然后栈顶元素出栈，将出栈元素的指向的点入度-1；
再次找入度为0的点入栈......重复以上操作



#define MaxVec 100;
# define Maxweight 9888;
//定义顶点的数据结构
typedef struct VNode
{
	char vecname;  //顶点的名称
	//指向的第一个结点的下标的指针
	struct  VNode* firstarc;

	int count;//统计这个顶点当前的入度  //////////////新增
	
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


void AOV(ALGrahp *G)
{
    int Stack[MaxVec];
    top=-1;
    int k; int i; int j;

    int n = 0; //记录目前的输出的排序
 //首先找入度为0的点,并且将其全部入栈

	for (i=0;i<G.vecnum;i++){
     if(G->vec[i].count){
     	Stack[++top]=i;
     }
 // 出栈一个元素
ArcNode *p;
while(top!=-1){
	k = Stack[--top];
	//输出这个元素
	printf("%s\n",k );
	n++;

	p = G.vec[i].firstarc;
	// 把和这个元素指向的元素入度-1
	while(p!=NULL){
		j =p-> advex;
		(G.vec[advex].count)--
		//如果入度为0了，就输出就行了
		if(G.vec[advex].count==0){
			Stack[top++]=G.vec[advex].count; 
		p=p->nextarc;
		}

	}

}


	}
}