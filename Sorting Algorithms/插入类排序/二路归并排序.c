
 //其中merge函数的作用在于合并2个已经有序的数列
void mergeSort(int A[],int low,int high)
{
	if(low<high)
	{
    int mid = int((low+high)/2);
    mergeSort(A,low,mid);
    mergeSort(A,mid+1,high);
    merge(A,low,mid,high);
	}
} 




 # 对两个已经排好序的元素进行地址交换
def combination(A,low,mid,high):
    A1 =A[low:mid+1]
    B1=A[mid+1:high+1]
    l1=len(A1)
    l2=len(B1)
    a1=0
    b1=0
    combine=[]
    while (a1<l1 and b1<l2):
        a_min=A1[a1]
        b_min=B1[b1]
        if (a_min<b_min):
            combine.append(a_min)
            a1=a1+1
        if (b_min<=a_min):
            combine.append(b_min)
            b1=b1+1  
    if(a1!=b1):
        if (a1==l1):
            combine.extend(B1[b1:l2])
        if ( b1==l2):
            combine.extend(A1[a1:l1])
    for j in range(low,high):
        A[j]=combine[j-low]
    return A
        

def mergeSort(A,low,high):
    if (low<high):
        mid = int((low+high)/2)
        mergeSort(A,low,mid)
        mergeSort(A,mid+1,high)
        combination(A,low,mid,high+1)
    
    return A

A=[4,1,1231,63,1241,42,44,123,9]
a=mergeSort(A,0,len(A)-1)
print(A)


        


