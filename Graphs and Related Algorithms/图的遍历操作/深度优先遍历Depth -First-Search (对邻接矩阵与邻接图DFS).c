深度优先遍历(Depth-First-Search)
基本算法:   
   首先任意找一点，标记该点，然后找这一点其中的邻接点，标记，直到找到最深的一条邻接点，
他没有其他邻接点了，此时回溯到有之前标记过的但是还有其他邻接点的点，重复该操作
直到将图中的所有的点都标记了，结束。

重点： 为了防止重复的访问，引入了一个visted数组，初始化的时候每个地方都为0，
访问过之后的下标位置的顶点设置为1。

因为有回溯，考虑使用递归的算法给予实现。

（1） 深度优先遍历（邻接矩阵）
typedef struct 
{
	int no;// 定义顶点的编号
	char info; // 定义顶点的信息
	
}Vertex;

typedef struct 
{
	float edges[MaxVex][MaxVex]; //定义权值的类型是int
	Vertex vec[MaxVex]//定义存放顶点的数组，实例化顶点；
	int vernum; // 顶点的个数
	int arcnum; // 边的个数
}AMGrahpy;
////////////////////////////////////////////////////////////////
# define Maxsize 100;
int visited [Maxsize];
for (int i =0;i<Maxsize;i++)
{
visited[i]=0;
}

void DFS_adjacency_matrix(AMGraph &G,int v) // v代表从哪个下标开始遍历
{
 //开始对v的相关操作
	prinfInfo(G,v); visited[v]=1;
for (int i =0;i<G.vernum;j++){
	// 若有连接，并且没有被访问过，就对这个元素递归DFS操作
    if((G.edges[v][i]!=0)&&(visited[i]==0))
    {
    	DFS_adjacency_matrix(G,i);
    }}

}

char prinfInfo(AMGraph G,int i)
{
  printf("%d\n", G.vec[i].info);
}
////////////////////////////////////////////////////////
(2)深度优先遍历（邻接表）

typedef struct Vertex
{
	int vecname;
	struct Vertex* fisrtarc;
	
}Vertex;
typedef struct ArcNode
{
	int adjvex;
	struct ArcNode* nextarc;
	int weight;
	
}ArcNode;
typedef struct ALGraph
{
	int vernum;
	int edgenums;
	Vertex vec[Maxsize];

}ALGraph;

int visited [Maxsize];
for (int i =0;i<Maxsize;i++)
{
visited[i]=0;
}

void DFS_adjacency_list(ALGraph *G,int k)
{
	//访问该节点
	prinfInfo(G,k);
	//将其标记记录为1
	visited[k]=1;
	// 对这个节点其他相邻的节点进行同样的访问
	ArcNode *p;
	p = G->vec[k].fisrtarc;
	if (p!=NULL){
		if (visited[p->adjvex]==0){
			DFS_adjacency_list[G,p->adjvex];
			p=p->nextarc;
		}
	}
}