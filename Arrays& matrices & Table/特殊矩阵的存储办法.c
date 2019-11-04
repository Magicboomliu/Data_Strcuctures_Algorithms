1.symmertic martix
N*N
特点：只需要存储diagnose上的元素以及lowwer triangular的元素即可
共储存 n(n+1)/2 个元素

void CreateSM(int &Array[],int martix[][],int n )
{	// 存储的个数为 n(n+1)/2
	int m = 0;
	for (int i=0;i<n;i++){

		for (int j=0;j<n;j++)
      {
      	if (i<=j){
      		Array[m]=martix[i][j];
      		m++;

      	}}}
2.triangular martix
特点：只需要存储upper triangular 的元素或者lowwer triangular 的元素
如果是上三角
void CreateTria(int &Array[],int martix[]][],int n)
{
//存储的元素的个数为n(n-1)/2
	int m=0;
	for(int i =0;i<n;i++){
      for (int j=0;j<n;j++){
      	if (i<j){
      		Array[m]=martix[i][j]
      		m++;
 }}}}

 3.diagnose martix
 特点：只有对角上有元素	
 void CreateDia(int &Array[],int martix[][]，int n)
 {
//储存的元素的个数为n个
 	int m = 0;
for(int i=0;i<n;i++){

	for (int j=0;j<n;j++){
		if (i==j){
			A[m] = martix[i][j];
			m++
		}
	}
}
 }