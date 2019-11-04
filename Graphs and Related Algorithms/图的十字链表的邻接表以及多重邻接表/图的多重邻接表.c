图的多重邻接表
图的邻接多重表主要是用来解决无向图中一个边需要存储2边的弊端而
主要构造
1.顶点仍然只有2个部分
（1）data 顶点的名称、
（2）firstedge 指向第一条依赖于该顶点的边

2.结点主要由6个部分组成
（1） mark 标记此边是否被搜索过
（2） ivex 依赖的顶点在表头数组的位置
（3） jvex 依赖的顶点在表头数组的位置
 (4) ilink 依赖与ivex的下一条边
（5） jlink 依赖于jvex的下一条边

#define MaxSize 1000;//最多1000个Vertex

typedef struct Vertex
{
	char data；// 顶点的名称
    struct Vertex* fisrtedge; //指向第一条依赖于该顶点的边
}Vertex;

typedef struct ADNode
{
	int mark;//标记此边是否被搜索过
	int ivex; //依赖的顶点在表头数组的位置
	int jvex; //依赖的顶点在表头数组的位置
	struct ADNode* ilink; //依赖与ivex的下一条边
	struct ADNode* jlink; // 依赖于jvex的下一条边
}ADNode;

typedef struct 
{
	int Vertexnum;
	int edgenums;
	Vertex vec[MaxSize];
	
}MutiADGraph;

void CreateMutiADGraph(MutiADGraph &MAG)
{

// 用户输入多少个顶点与边
	cin>>MAG.Vertexnum>>MAG.edgenums;
//初始化顶点
	for(int i=0;i<MAG.Vertexnum;i++){
		cin>>MAG.vec[i].data；
		MAG.vec[i].fisrtedge=NULL;
	}
//开始
for(int j=0;j<MAG.edgenums;j++){
	cin>>V1>>V2>>W;
	int ix = getLocation(V1,MAG.vec);
	int iy = getLocation(V2.MAG.vec);
    
    ADNode* node1=(ADNode*)malloc(sizeof(ADNode));
	node1.ivex = ix;
	node1.jvex = iy;
	node1->info = NULL;
	node1->ilink = NULL;

	if(MAG.vec[ix].fisrtedge==NULL){
		MAG.vec[ix].fisrtedge = node1;
	}
	else{
		ADNode *P;
		p=MAG[ix].fisrtedge;
		while(p->ilink!=NULL){
			p=p->ilink;
		}
		p->ilink = node1;
	}

	if (MAG.vec[iy].fisrtedge=NULL){
		MAG.vec[iy].fisrtedge = node1;
	}
	else{
		ADNode *q;
		q=MAG[iy].fisrtedge;
		while(q->jlink!=NULL){
			q=q->jlink;
		}
		q->ilink = node1;

	}


}
}
