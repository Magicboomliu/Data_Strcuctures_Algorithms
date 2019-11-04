// 矩阵的一些基本的操作
 

//1.定义一个矩阵
define m = 10
define n = 10
int A[m][n]
// 矩阵的转置
void transpose(int A[][maxsize], int &B[][],int m, int n)
for(int i=0;i<m;i++){

	for (int j=0;,j<n,j++){

		B[j][i]=a[i][j];
	}
}
//矩阵加法
void add(int A[][maxsize],int B[][maxsize],int &C[][],
	     int m,int n)
{
	for(int i=0;i<m;i++){
		for (int j=0;j<n;j++)
		{

			C[i][j]=A[i][j]+B[i][j];
		}
	}
}
//矩阵乘法
void mutmat(int A[][maxsize],int B[][maxsize],int &C[][],
	     int x,int y,int z) // 假设A shape 是x*y,假设B的shape 是y*z
{
for (int i=0;i<x;i++){

	for (int j=0;j<z;j++)
	{ 
	for (int k=0;k<y;k++)
	{ mut = A[i][k] * B[k][j];
	  C[i][j]+=mut;}   
	 }
	}
}

