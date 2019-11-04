

// 三元法主要用来表示稀疏矩阵
一般定义的稀疏矩阵是指代非0元素占矩阵总体小于0.05的矩阵

// 就是每个结点记录了三个信息
此时矩阵的行坐标i、此时矩阵的列坐标j、以及此时矩阵的值val

typedef struct 
{
	int val; //对应的矩阵的值
	int i;  // 对应的行坐标
	int j;  // 对应的矩阵坐标
}Trimat;
// Trimat trimat[maxitems+1] //之所以要加1是因为要有1个空间放元素0
// trimat[k].i  代表第i行(从1开始，而不是从0开始) 
// trimat[k].j  代表第j列
// trimat[k].val 代表元素的值

其实当 val ,i,j 类型相同时候，完全可以使用
trimat[maxitems+1][3] 这样一个2维的数组来代替。
其中：
trimat[k][0] 代表元素的值
trimat[k][1] 代表行数下标
trimat[k][2] 代表列数下标
trimat[0][0] 代表非0元素的个数
trimat[0][1] 代表矩阵一共多少行
trimat[0][2] 代表矩阵一共多少列
////////////////////////////////////////////
Task1 已知一个整数稀疏矩阵A(m n)
（1）给定一个稀疏矩阵，将其化为三元列表的形式
（2）将三元列表的形式的矩阵，还原为一个三元矩阵

typedef int Trimat;
#define maxitems 1000;
#define Maxsize = 100；
Trimat trimat[maxitems+1][3]；

（1）
void CreateDM(Trimat &trimat[maxitems+1][3],int A[Maxsize][Maxsize],int m,int n)
{
//将非0的元素依次填入trimat列表中
int i;int j;
int k=1;  // 因为trimat矩阵是从1开始记录的。
for (i=0;i<m;i++){
	for(j=0;j<m;j++){
		if (A[i][j]!=0)
		{
			trimat[k][1]=i;
			trimat[k][2]=j;
			trimat[k][0]=A[i][j];
			k++;
		}
	}
// 记录非0元素的个数，矩阵的行数与矩阵列数
trimat[0][0]=k-1;
trimat[0][1]=m;
trimat[0][2]=n;
}}

void recoverM(int &A[Maxsize][Maxsize],Trimat trimat[maxitems+1][3])
{

//获得矩阵的基本信息，行，列，非0元素的个数
int nums = trimat[0][0];
int rows =trimat[0][1];
int columns =trimat[0][2];
int k=1;
for (int i=0;i<rows,i++){
	for (int j=0;j<columns;j++){
		A[i][j]=0;
	}
}
for(k;k<=nums;k++){
	int a= trimat[k][1];
	int b =trimat[k][2];
	int val = trimat[k][0];
	A[a][b]=val;
}



}