//

而是是首先遍历全部，找到最小的按个，然后与第一个元素交换位置
从第2个开始找，找到最小的那个，放在第2个。
时间复杂度为O(n^2)

void SimpleSelect(int &A[],int n)
{ int  i ,j;
	int minval;
  for(i =0;i<n-1,i++){
     int temp =A[i];
     minval =i;
  	for (j=i,j<n,j++){
      if (A[j]<temp){
      	temp = A[j];
      	minval =j;
      }
     A[minval]=A[i];
     A[i] = temp;
  	}
  }
}

#简单选择排序
def SimpleSelectSort(A):
    for i in range(len(A)-1):
        temp=A[i]
        minval=i
        for j in range(i,len(A)):
            if (A[j]<temp):
                temp = A[j]
                minval =j
        A[minval]=A[i]
        A[i]=temp
        
    return A

a=[49,38,65,97,76,13,200,223131,49]
a=SimpleSelectSort(a)
print(a)
