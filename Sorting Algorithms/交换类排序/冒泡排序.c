// 算法思路简单
//每次找出最大的那个元素，把它放在最后面n，
//然后找前n-1个元素中最大的元素，把它放在n-1的位置

时间复杂度为O(n^2)
// C code
void BubbleSort(int &A[],int n)
{
	int i,j;
 for (i=n;i>0,i--){
 	for (j=0;j<i;j++){
 		if (A[j]>A[j+1]){
 			temp=A[j];
 			A[j]=A[j+1];
 			A[j+1]=temp;
 		}
 	}
 }}

 // Python Code
 # 冒泡排序

def BubbleSorting(A):
    for i in range(len(A),0,-1):
        for j in range(0,i-1):
            if(A[j]>A[j+1]):
                temp=A[j]
                A[j]=A[j+1]
                A[j+1]=temp
    return A

a=[49,38,65,97,76,13,200,223131,49]
a=BubbleSorting(a)
print(a)
