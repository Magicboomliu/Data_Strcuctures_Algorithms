Dijsktra算法求最短路径问题

---解决从一个点出到其他各点的最短路径，时间复杂度为O(n^2)
算法思想：
首先建立三个辅助的列表 
(1) dist[]存放当前剩余的点到起始点的距离
（2）path[]存放每一个结点的上一个点
（3）set[],标记数组，查看每个点是否在最短的路径中
set[i]==0表示不在路径中，set[i]==1表示在路径中

步骤
  (1)初始化所有的set[i]=0
（2）选择一个点v0,set[v0]=1计算此时的每一个点到这一点的距离，
存放在dist中，如果不是无限远，在path[i]=v0

 （3）在dist数组中找到最短的那个路径u，set[u]=1,更新dist,
 若A[v0][u]+A[u][i]<dist[i],更新dist的值为：A[v0][u]+A[u][i]，path[i]=u
 （4）重复步骤（3） n-1次
 遍历得到了所有的最短路径的值dist[i]，利用栈遍历path[i]可以得到对应的路径

// 构造Dijsktra算法
#define Maxsize 100;
#define INF 9999;
int dist[Maxsize];
int path[Maxsize];
void Dijsktra(AMGraph G,int v0,int &dist[],int &path[])

{  //定义dist,path以及set数组
	int set[Maxsize];
	//初始化操作(1)(2)
	int i; int j; int min;int k;int v;
	for (i=0;i<G.vernums;i++)
	{
		set[i]=0;
		dist[i]=G.edges[v0][i];
		if (dist[i]<INF){ path[i]=v0;}
		}
	}
	v=v0;
	for (j=0;i<G.vernums-1;j++){
		//首先找最小路径
         min =INF;
		for(i=0;i<G.vernums;j++){
         if((set[i]==0)&&(dist[i]<min)){
         	min=INF;
         	k=i;}}
 //set[u]=1,更新dist,
         set[k]=1;

 //若A[v0][u]+A[u][i]<dist[i],更新dist的值为：A[v0][u]+A[u][i]，path[i]=u
         for (int m=0;m<G.vernums;m++){
         	if((set[i]==0)&&dist[m]>G.edges[v][k]+G.edges[k][m]){
         		dist[m]=G.edges[v0][k]+G.edges[k][m];
         		path[m]=k;} }
         v=k;
	}


使用Dijstra算法后如何实现知道v0到v2之间的距离以及经过的点？

int main{
	int dist[Maxsize];
    int path[Maxsize];
	Dijsktra(AMGraph G,v0,dist,path);
//求距离
	dis = dist[v2]
	printf("the distance is %s\n",dis );
//求路径，使用栈
	int stack[Maxsize];
	top=-1;
	a = path[v2];
	stack[++top] = a;
	while(a!=v0){
      a=path[a];
      stack[++top]=a;
	}
	while(top!=-1){
		node=stack[top--]
		printf("%d\n", node);
	}
}