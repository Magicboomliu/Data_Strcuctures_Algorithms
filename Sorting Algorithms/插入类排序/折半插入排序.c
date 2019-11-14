算法思想：

// 与直接插入排序不同的是：
// 插入时候使用2分法，减少比较的次数
// 设置一个下标low，设置一个上标high
//设置一个中间值 medium

int BinaryInsertSort(int &A[],int n)
{
	int i,j,k;
 for (i =1;i<n;i++){

 	temp = A[i];
 	low=0;
 	high=i-1;
 	while(low<=high){
     medium =int((low+high)/2)
     if (temp> A[medium]){
     	low = medium+1;
     }
     if (temp<A[medium]){
     	high = medium -1;
     if (temp=A[medium]){
     	low = medium;
     	break;
     }
     }
     int B[Maxsize];
     for (j=i,j>low,j--){
     	A[j]=A[j-1]
     }
     A[low] = temp;

 	}
 }

}

// Python code 
#折半插入排序


def BinaryInsertSort(A):
    for i in range(1,len(A)):
        temp=A[i]
        low=0
        high=i-1
        while(low<=high):
            medium=int((low+high)/2)
            if (temp>A[medium]):
                low =medium+1
            if( temp <A[medium]):
                high = medium-1
            if (temp ==A[medium]):
                low = medium
                break
        print(low)
        for j in range(i,low,-1):
            A[j]=A[j-1]        
        A[low]=temp
    return A

a=[13,38,31,3123,21,33,98,43]
a = BinaryInsertSort(a)
print(a)