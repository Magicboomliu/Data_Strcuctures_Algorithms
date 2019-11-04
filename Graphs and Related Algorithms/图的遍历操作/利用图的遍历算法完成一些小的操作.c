// 利用图的遍历算法完成一些小的操作
（1） 设计一个算法，计算无权无向图中，距离顶点V最远的一个顶点。
即到达这个顶点的路径最长
// 可以使用广度优先算法

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

# deine Maxsize 100
void FindTheLongestPath(ALGraph* G,int v)
{
	path = 0;
	ArcNode* p;
	int que[Maxsize];
	int rear;int font;
	rear=font =0;
	int j;

	//元素入队
	rear = (rear+1)%Maxsize;
	que[rear] =v;
	visited[v]=1;
	
	while(font！=rear){

		font=(font+1)%Maxsize;
		j = que[font]
		p = G->vec[j].fisrtarc;
	while(p!=NULL)
	{
		if(visited(p->adjvex)!=0){
			rear = (rear+1)%Maxsize;
			que[rear] = p->adjvex;
			visited[p->adjvex]=1;
		}
		p=p->nextarc;
	}
	return j;
	}

}



//写一个算法，判断一个无向图是否是一个树,

对于（n个顶点）无向图而言，如果满足是树，则证明结点的应该是n-1
即这个算法其实是在判断一个图中变的个数。
1 首先判断一个图是否为连通图
2. 然后判断这个图里面结点的个数是否为n-1

//主要统计一个图里面顶点个数与边个数2倍（最后的结果为vn,2en)
void DFS(ALGraph *G int v;int &vn;int&en)
{
ArcNode* p;
visited[v]=1;
++vn;
p=G->vec[v].fisrtarc;
while(p!=NULL){
	en++; //写在外面正好2倍
	if (visited[p->adjvex]==0){
		DFS(G,p->adjvex,vn,en);
		p=p->nextarc;
	}
}
}

int main()
{
	int vn=en=0;
    DFS(G,1,vn,en);
     if (vn=G.n) //证明为连通图，不然的话会小于G.n
     {
     	if (en/2 =vn-1) //证明是一个树
           {return 1}
       else{return 0;}

     }
	else{return 0;}
}
//设计一个算法，判断两个结点之间是否路径
没有路径证明两个顶点在不同的最大连通子图上
int  whetherconnected(ALGraph* G; int i;int j)
{

//初始化visited数组
for (int k=0;k<G.n;k++)
{
	visited[k]=0;
}

BFS(G,1,visited[]);
if (visited[j]=1)return{1;}
else(return 0;)}