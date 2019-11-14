// 有关堆的相关操作

1.向堆中添加一个元素，把这个元素放在堆的最后面，然后重新去调整这个堆即可。
2.堆中删除一个元素，删除的这个元素用最后一个元素补上，然后重新调整这个元素的位置即可

// 下面以最大堆为例子，进行上述2个操作

// C Codes
void Shift(int A[],low,high){
  int i = low;
  int j = 2*i + 1; //左孩子
  int temp = A[i]

  while(j<high){
  	if (j+1<high){
  		if(A[j+1]>A[j]){
  			j=j+1;
  		}
  	}
  	if(temp<A[j])
  	{
      A[i]=A[j];
      A[j]=temp;
      i=j;
      j=2*i+1;
  	}
  }}

1. 添加一个元素
 void AddElem(int &heap[Maxsize],int n,int elm)
 { 
 	heap[n] = elm;
 	int i;
 	for (i=int((n+1)/2-1),i>=0;i--){
 		Shift(A,i,n);
 	}}
2.删除一个元素
void delete(int &heap[Maxsize],int n, int elm)
{
	int i;
	int j;
	for (i=0,i<n,i++){if (heap[i]=elm){j=i;}}
	A[j] = A[n-1];
	Shift(A,j,n-1);
}

// Python Codes
def shift(A,low,high):
    i=low
    j=2*i+1
    temp=A[low]
    while(j<high):
        if (j+1<high):
            if(A[j]<A[j+1]):
               j=j+1
        if(temp<A[j]):
            A[i]=A[j]
            A[j]=temp
            i=j
            j=2*i+1
        else:
            break
    return A

1. 添加一个元素
def addElm(A,elm):
    A.append(elm)
    for i in range(int(len(A)/2-1),-1,-1):
        shift(A,i,len(A))
    return A

a=[1,2,4,5,132,412,6,12,31]
b=88
a = addElm(a,b)

2.删除一个元素

def deleteElm(A,elm):
    for i in range(len(A)):
        if (A[i]==elm):
            k = i
    A[0]=A[k]
    A.pop()
    shift(A,0,len(A))
    return A


a=[1,2,4,5,132,412,6,12,31]
b=6
a = deleteElm(a,b)
print(a)
