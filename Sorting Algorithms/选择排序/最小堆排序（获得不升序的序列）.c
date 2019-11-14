


//和最大堆比，只需要改变shift函数即可
// C  code
void Shift(int A[],low,high){
  int i = low;
  int j = 2*i + 1; //左孩子
  int temp = A[i]

  while(j<high){
  	if (j+1<high){
  		if(A[j+1]<A[j]){
  			j=j+1;
  		}
  	}
  	if(temp>A[j])
  	{
      A[i]=A[j];
      A[j]=temp;
      i=j;
      j=2*i+1;
  	}
  }
}

void HeapSort(int A[],n)
{ int i;
	int temp;
	//构建最小堆
	for (i=int(n/2-1),j>=0,j--)
	{
		Shift(A,j,n);
	}
	//元素交换，循环
	for (i=n-1,i>0,i--){
		temp=A[0];
		A[0]=A[i];
		A[i]=temp;
		Shift(A,0,i);
	}

}

// Python code

#最小堆排序 
def shift(A,low,high):
    i=low
    j=2*i+1
    temp=A[low]
    while(j<high):
        if (j+1<high):
            if(A[j]>A[j+1]):
               j=j+1
        if(temp>A[j]):
            A[i]=A[j]
            A[j]=temp
            i=j
            j=2*i+1
        else:
            break
    return A

def HeapSort(A):
    #首先建立堆
    for i in range(int(len(A)/2-1),-1,-1):
        shift(A,i,len(A))
    # 交换位置
    for j in range(len(A)-1,0,-1):
        temp=A[0]
        A[0]=A[j]
        A[j]=temp
        shift(A,0,j)
    return A

a=[1,4124,412,41,42,56,64,444,8989,909,0,99,0.3,-99]
b=HeapSort(a)
print(b)

