广度优先遍历 Breadth-First-Search
// 类似于图的层次遍历
1.对邻接矩阵的广度优先遍历

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
/////////////
# define Maxsize 1000;
void BFS_adjacency_matrix(AMGrahpy & G,int k,int visited[Maxsize])
{
	//获得图中顶点的个数
	for (int i=0;i<G.vernum;i++){
		visited[i]=0;
	}
	//建立队列
	int j;
	int que[Maxsize];
	int rear;int font;
	rear=font=0;
	//元素入队
	rear = (rear+1)%Maxsize;
	que[rear]=v;
	visited[v]==1;
	while(font!=rear)
	{
		//对首出队
		font=(font+1)%Maxsize;
		j = que[font];
		// 出队元素的同行未标记的元素入队
		for (int w=0;w<vernum;w++){
			if((G.edges[j][w]!=0)&&G.vec[w]==0){
				rear=rear+1；
				que[rear]=w;
				visited[w]=1;
			}}} }
///

(2)邻接表的广度优先搜索算法
///
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

void BFS_adjacency_list（ALGrah* G,int k ,int visited[Maxsize]）
{
  ArcNode* p;
  int j;
  int que[Maxsize];
  int font;int rear;
  rear=rear+1;
  que[rear]=v;
  visited[v]=1;

  while (font!=rear){
    font=font+1;
    j =que[font];
    p = G->vernum[j].fisrtarc;

  	while(p!=NULL){
  		if (visited(p->adjvex)==0){
  			rear=(rear+1)%Maxsize;
  			que[rear]=p->adjvex;
  			visited[p->adjvex]=1;}
  	    p=p->nextarc;}
  }

}
