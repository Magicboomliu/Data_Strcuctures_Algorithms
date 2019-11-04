Floyd算法求解所有点的最短路径，最后产出的是一个最短路径矩阵
算法思想：

辅助变量path[i][j]，记录i,j之间的最新中间点
初始都为-1，表示没有中间点。


初始化，复制邻接矩阵，初始化path[][]
(1)首先得到图的有权邻接矩阵图，这样得到是所有相连接点的路径长度

(2)然后让所有点都经过v0点，然后在去指向各点，计算此时的长度
如果长度变化，做如下的改变
if(A[i][v0]+A[v0][j]<A[i][j]){
    Update A[i][j]=A[i][v0];
    path[i][j]=v0;
}
(3)步骤重复n遍，v0,v1,v2,vn得到最后的矩阵A[i][j]就表示了i到j的最短距离。

//算法的实现
#define maxsize 100;
#define INF 9999;


int path=[][maxsize];
int A[][maxsize];
void Floyd（AMGraph G,int &A[maxsize];int &path[maxsize]）
{
//初始化，复制邻接矩阵，初始化path[][]
int i,j,k;
int v;
for (i=0;i<G.vernums;i++){
	A[i][j]=G.edges[i][j];
	path[i][j]=-1;
}
/*
(2)然后让所有点都经过v0点，然后在去指向各点，计算此时的长度
如果长度变化，做如下的改变
if(A[i][v0]+A[v0][j]<A[i][j]){
    Update A[i][j]=A[i][v0];
    path[i][j]=v0;
} 
步骤重复n遍
*/
for (k=0;k<G.vernums;k++){
   v=G.vec[k];
   for (i=0;i<G.vernums;i++){
   	 for (j=0;j<G.vernums;j++){
   	      if(A[i][v]+A[v][j]<A[i][j]){
          A[i][j]=A[i][v0];
          path[i][j]=v0;} }}
}}


使用Floyd算法后如何实现知道v0到v2之间的距离以及经过的点？

int main{

int path=[][maxsize];
int A[][maxsize];
Floyd(AMGraph G,A,path);

// v0与v2之间的距离
distance = A[v0][v2]
printf("the distance is %s\n",dis );

//中间经过的点？
printpath(v0,v1,path);
}

//可以使用递归实现求中间的那些点
void printpath(int u,int v,int path[]){
	if(path[u][v]=-1){printf("%d\n",u );}
	else{
		printpath(u,path[u][v],path);
		printpath(printpath[u][v],v,path);
	}
}