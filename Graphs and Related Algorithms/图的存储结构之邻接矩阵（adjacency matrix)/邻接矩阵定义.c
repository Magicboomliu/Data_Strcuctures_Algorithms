
////////////////////////////
基本概念
//////////////////////////////
构造邻接矩阵
1. 无权图
(1).无向无权矩阵
 if 若Vi与Vj连接:
A[i][j]=A[j][i]==1;
 else :
 A[i][j]=A[j][i]==0
(2)有向无权图
if 若Vi与Vj连接:
   A[i][j]=1;
else :
   A[i][j]=0;
A[i][i]=0;
2. 有权图
连接的话，将无权图里面的1改为权值
没有连接的话，将无权图的里面的0改为正无穷（编写代码时候一般写成一个很大的数）
自己连接自己的话，还是0
/////////////////////////////////////////


Task1 用Adjacency Matrix1 去存储结构存储图
////////////////////////////////////////////
# define MaxVex=100; //定义最多有100个顶点Vertex
# define MaxWeight=9888; // 定义不连接的权值为9888（很大的一个数）
// 构造顶点类型
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

// 创建无向网络
AMGrahpy CreateUDN(AMGrahpy & G)
{
  // 首先需要从用户那里获得图的顶点与边的信息
   cin>>G.vernum>>G.arcnum;
  // 接着需要用户依次输入顶点的信息,建立顶点数组
   for(int i=0;i<G.vernum;i++)
   {    cin>>G.vec[i].info ;
   	    G.vec[i].no = i;}
   // 初始化邻接矩阵，不连接的都设置为无穷大，自己与自己的设置为0
    for (int i =0; i<G.vernum){
   	for (int j =0; j<G.vernum)
   	{
   	if (i==j):{G.edges[i][j]==0;}
   	else{G.edges[i][j]=MaxWeight;}}
   }
   //用户输入连接的顶点名称与对应的权值
   for (int k=0; k<G.arcnum;k++)
   {cin>>V1>>V2>>W；
   // 获得顶点名称对应在Vect中下标
   int i = GetLocation(V1,G.vec);
   int j = GetLocation(V2,G.vec);
   A[j][j]=A[j][i]=W;}
   return G;
    }
//获得位置
int GetLocation(char V,char vec[])
{
	length = sizeof(vec)/sizeof(char);
	for (int i=0;i<length,i++){
		if (vec[i]==V){
			return i;}
		}
	}






