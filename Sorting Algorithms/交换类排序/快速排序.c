//
快速排序算法的基本原理：
Step 1:
首先选择第一个元素作为初始判断元素：
Step 2:
所有比这个元素小的放这个元素的左边，所有比这个元素大的放这个元素的右边
Step 3:
重复对这两边的元素重复 step2

难点1: 具体是如何实现 “所有比这个元素小的放这个元素的左边，所有比这个元素大的放这个元素的右边”

定义一个i，指向第一个元素。定义一个j，指向最后一个元素

j往前走，发现有小于A[i]的元素，让A[i]=A[j]
然后从i+1开始，发现有大于A[i]的元素，就让他等于之前的那个A[j]中
直到i=j 结束，让此时这个点的元素等于A[i]
*****************************时间复杂度为(n*logn)********************
比之前都好，所以叫快速排序


void QuickSort(int &R[],int low,int high)
{  
	int temp;//用来存放最为判断的那个元素的值
	int i = low;
	int j = high;
	if (low<high){
     temp = R[low];
     while(i<j){
     	// 如果大就没事
     	while(j>i&&R[j]>=temp){
     		j--
     	}
     	//如果小了，就要交换位置
     	if (i<j){
     		A[i]=A[j];
     		i++;
     	}
     	// 如果小就没事
     	while(i<j&&R[i]<temp){
     		i++
     	}
     	// 如果大了就交换位置
     	if (i<j){
     		A[j]=A[i];
     		j--;
     	}}
     //循环结束，证明i=j
     //给i处赋值temp
     A[j] = temp;
     // 递归走起
     QuickSort(A,low,i-1);
     QuickSort(A,i+1,high);
	}

}

#快速排序
def QuickSort(A,low,high):
    i =low
    j = high
    if(low<high):
        temp=A[low]
        while(i<j):
            while(j>i and A[j]>=temp):
                j=j-1
            if(j>i):
                A[i]=A[j]
                i=i+1
            while(i<j and A[i]<temp):
                i=i+1
            if(j>i):
                A[j]=A[i]
                j=j-1
        A[j]=temp
        QuickSort(A,low,i-1)
        QuickSort(A,i+1,high)
    return A

a=[49,38,65,97,76,13,200,223131,49]
a=QuickSort(a,0,len(a)-1)
print(a)
