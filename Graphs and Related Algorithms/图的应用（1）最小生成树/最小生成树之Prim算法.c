Prim 求图的算法最小生成树
时间复杂度为O(n^2)
一般的操作对象是邻接矩阵表示的图
这是一种贪心算法
MST的性质： 
若G~(V,E) 
{U}  {V-U}  找一个最短的E
重复以上

#define maxsize;
# define INFNE 900000; //记录一个很大的数
void Prim(ADGraph G,int v0)
{
  // 生成vset与lowerset
	// vset 表示该点有没有被访问过，若没有被访问过，那么、
	// vset[i]=0,若已经访问过，则vset[i]=1;
	int sum=0;  // 求生成树的总路径的长度
	int v;
	int b; // 用来记录最小值的下标
	int vset [maxsize];
	int lowerset[maxsize];
	int min; //记录最小值

	//首先将所有的顶点的状态调整为没有被访问过
	for(int i=0;i<G.vernums;i++){
		vset[i]=0;
	}
    // 将v0并入最小生成树中去
	v=v0;
	vset[v]=1;
	//计算此时，所有点距离v的距离
	for(int j=0;j<G.vernums;j++){
     lowerset[i]=G.edges[v][i];
	}
	//开始循环不断向U中加入点与元素
	for(int k=0;j<G.vernums-1;k++){
      min =INFNE;
      for (int m=0;m<G.vernums;m++){
        if((vset[m]==0)&&lowerset[m]<min){
        	//记录此时的最小值
        	min = lowerset[m];
        	// 记录此时最小值的下标
        	b = m;}
        // 将其与sum累加，求生成树的总路径长。
       sum+=min;
       v=b;
      // 更新weight,若剩下未被访问的节点中岛加入的点的距离小于之前距离，
       //将其更新为新的距离，已满组距离永远是到生成树的最小的距离。
      for (int l =0;l<G.vernums,l++){
      	if((vset==0)&&G.edges[v][l]<lowerset[l]){
      		lowerset[l]=G.edges[v][l];
      	}

        }
      }
	}
}	 