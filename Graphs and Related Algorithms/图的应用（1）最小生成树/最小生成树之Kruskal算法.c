Kruskal MST Algorithm

Kruskal算法思路更为简单与粗暴。

也是一种贪心算法
首先我们已知所有的边信息:权重与指向
而且我们知道所有的节点的信息。
算法的步骤：
（1）我们把所有节点列出来。
（2）然后将边的信息进行排序（从小到大排序）
（3）将排好的边依次连接节点。
（4）如果出现回路，就跳过他。
（5）直到所有的节点都被遍历了一遍

#define maxsize;

typedef struct Edge
{// a b 是这个边连接的2个顶点
	int a;
	int b;
	//权重
	int w;
}Edge;
// 假设这些边的信息已知
Edge edge [maxsize];
//假设排序算法已经写好
Sorted(edge);

// 并查集,将a的值代为a点能够到达的最远的点的值
int parent[maxsize];
int getResearchable(int a)
{
	while(a!=parent[a])
         {a=parent[a];}
     return a;
}
void Kruskal(MGraph G,int &sum; Edge edge[])
{ 
	//传入顶点的数目以及边的数目。
	int N = G.vernums;
	int E = G.edges;
	int i = 0;
	int sum =0;
	//依次遍历所有的最短的边的信息
	for (i =0;i<E;i++){
		//  a=能够达到的最远的点。
		a = getResearchable(edge[i].a);
		// b=能到带到的最远的点。
		b = getResearchable(edge[i].b);
	// a与b不连通的，则可以连接
        if (a!=b){

			parent[a]=b;
		     sum += edge[i];
        }
	}
}

