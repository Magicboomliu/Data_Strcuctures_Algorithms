# 直接插入排序
----时间繁杂度为O(n^2)
算法的原理：

Step 1:
给定一组序列，选择第一个元素作为排队的第一个元素

Step 2:
看下一个元素，如果比已经排好的元素要小，就排到这个元素的前面

Step 3:
重复步骤2， 直到排好所有的元素。


// C code

void insertSort(int &R[],int n)
{
  int i,j;
  for (i =1;i<n;i++){
    temp = R [i]; // 从第2个元素开始比较
    //如果比排好序的小，就交换。
    for( j=i-1;j>=0;j--){
    	if(R[j]>temp){
           int a = R[j];
           R[j]=R[j+1];
           R[j+1] =a;
        else{
        	break;
        }
    	}
    }
}}

// Python Code
#直接插入排序

def insertSort(array):
    for i in range(1,len(array)):
        temp=array[i]
        for j in range(i-1,-1,-1):
            if (array[j]>temp):
                a =array[j]
                array[j]=array[j+1]
                array[j+1]=a
            else:
                break
    return array

a=[49,38,65,97,76,13,27,49]
a=insertSort(a)
print(a)

         