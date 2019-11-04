 图的十字链表法主要用于解决有向图中不好找入度边的问题
 //改变在于首先是顶点结点出新增加了一个指针（firstin,firstout）
// 另外的改变在于结点有四个值：
（1） headval
 (2)  local
 (3)  tailarc
 (4)  headarc

 其中 headval 表示他从哪里来的下标
      local  为他的下标
      tailarc 指向他的入度
      headarc 就是出度 
////////////////////////////////////////////////////////////////////
#define Maxvex 1000; //最多的顶点数目

 // 首先生成顶点的结构
typedef struct Vertex
{
	char Vername;
	struct Vertex* fisrtin;  入度的指针
	struct Vertex* firstout; 出度的指针
}Vertex;


//定义结点的结构
typedef struct ArcNode
{
	int headval; //从哪里来
	int local; //自己的下标
	struct CrossNode* tailarc;// 入度的nextarc
	struct CrossNode* headarc; //出度的nextarc
}ArcNode;

typedef struct CrossGraph
{
	int Vertex_nums;
	int edges_nums;
	Vertex vec[Maxvex];
	
}CrossGraph;

/// 开始构造一个无权的有向的图
void CreateCrossGraph(CrossGraph &CG)
{
	// step1 :确定顶点的基本信息

	//首先让用户输入顶点的个数与edges的个数
	cin>>CG.Vertex_nums>>CG.edges_nums;
	//初始化所有的顶点
	for(int i=0;i<CG.Vertex_nums,i++){
		cin>>CG.vec[i].Vername;
		CG.vec[i].firstout=NULL;
	}

	//初始化完成，现在开始link
	for (int j =0;j<CG.edges_nums;j++){
    //用户输入连接的关系
		cin>>V1>>V2;
		int pos1 = getLocation(V1,CG.vec);
		int pos2 = getLocation(V2,CG.vec);
		ArcNode* node1 = (ArcNode*)malloc(sizeof(ArcNode));
		ArcNode* node2 = (ArcNode*)malloc(sizeof(ArcNode));
		node1->local = pos1;
		node2->headarc = pos1;
		node2->local = pos2;
       
		if (CG.vec[pos1].firstout==NULL){
			CG.vec[pos1].firstout = node2;
		else{

			ArcNode* r =CG.vec[pos1].firstout;
			while(r->headarc!=NULL){
				r=r->headarc;
			}
			r->headarc = node2;
		}
		if(CG.vec[pos2].fisrtin==NULL){
			CG.vec[pos2].fisrtin=node1;
		else{
			ArcNode * t=CG.vec[pos2].fisrtin;
			while(t->tailarc!=NULL){
				t = t->tailarc; 
			}
			t->tailarc =node1;
		}		}

		}




	}


}