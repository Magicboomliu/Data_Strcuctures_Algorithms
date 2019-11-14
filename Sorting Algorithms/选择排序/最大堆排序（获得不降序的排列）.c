
// 最大顶堆 ----升序排列
堆排序的时间复杂度时nlogn和快速排序是一样的
// C code

void shift(int A[],int low,int high)
{
 int i =low;
 int j = 2*i+1 //此时i代表j的左子树
 int temp = A[low]
 while(j<high)// 存在左子树，也就是存在子树，也就是i有孩子时候
 {   if (j+1<high){
 	 	// 比较2个孩子的大小,让j等于较大的那个数字
 	if(A[j]<A[j+1]){
 		j=j+1;
 	}}
 	// 若这个比temp大，交换位置然后让i等于j,继续比较
 	if (temp<A[j])
 	{
      A[i]=A[j];
      A[j]=temp;
      i=j;
      j = 2*i +1
 	}
 	else{
 		break;}
 }}
// Shift 完成之后，保证了堆顶的元素是最大值。

//开始进行堆排序算法的编写
 void HeapSort(int A[],int n)
 {
//首先第一步应该是建立一个有序的堆。
 	// 从右向左，从下到上。第一个非叶元素的下标应该是 N/2-1，之后就全部都是非叶的元素了
    int i;
    int temp;

    for (i=n/2-1,i>=0,i--)
    {
    	shift(A,i,n);
    }//通过这一步我们建立了一个堆

    // 然后我们把堆顶的元素与堆尾的元素换位置
    for(int j =n-1,j>0,j--){
    	temp=A[0]
    	A[0]=A[j]
    	A[j]=temp;
    	// 对剩下的元素（除了最后一个之外）重新进行建堆操作
    	shift(A,0,j);
    }
 }

//Python Code

 #最大堆排序 
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

def HeapSort(A):
    #首先建立堆
    for i in range(int(len(A)/2-1),-1,-1):
        shift(A,i,len(A))
    print(A)
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