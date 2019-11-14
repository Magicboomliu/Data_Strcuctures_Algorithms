
性质： 希尔排序具有不稳定性
希尔排序的算法思路： 
1.分组（按照间隔取元素），组内排序（根据大小交换下标位置的元素）
2.细化分组（取更小的间隔），组内排序
3.直到最后分组的元素间隔为1，排序

eg:
[49,38,65,97,76,13,27,49]

刚开始分组间隔为4：
有4组：
[49,76] 排序
【38,13】 排序
【65,27】 排序
【97,49】 排序
最后变成了【49,13,26,49,76,38,65,97】

然后变化间隔为2：
分为2组:
[49,26,76,65] 排序[26,49,65,76]
【13,49,38,97] 排序[13,38,49,97]
变成了[26，13,49,38,65,49,76,97]

最后间隔变成了1：
有1组：
排序[13,26,38,49,49,65,76,97]

// C code

int binarytimes(int n){
    int i =1;
    int outcome = 1
    if (n==0){
    	return outcome;
    }
	else{
		while(i<=n){
         outcome=outcome *2;
         i=i+1;
		}
	return outcome;}}

//希尔排序的算法思路
// A is unsorted array,and n is the length
void ShellInsertSorting(int &A[],int n)
{
  int i = 1;
  interval = int (n/binarytimes(i));
  while(interval>0){
   int j=0;
   // 对所有的分组进行排序
   for(j;j<interval;j++){
    // 每个小组内的排序
     for (k=j+interval;k<n;k=k+interval)
     	{   temp=A[k];
     		for (int z = k-interval;z>=j,z=z-interval){
     			if (temp<A[z]){
     				t=A[z];
     				A[z]=A[z+interval];
     				A[z+interval]=t;
     			}
     			else{
     				break;
     			}
     		} }}
      //减小间距，继续排列
      i=i+1;
       }}


// Python Code
# 希尔排序

def binarytimes(n):
    i=1
    outcome =1
    if(n==0):
        return outcome
    else:
        while(i<=n):
            outcome=outcome*2
            i=i+1
            
    return outcome

def ShellInsertSorting(A):
    i =1
    interval = 1
    while(interval>0):
        interval =int(len(A)/binarytimes(i))
        for j in range(interval):
            for k in range(j+interval,len(A),interval):
                temp =A[k]
                for z in range(k-interval,j-interval,-interval):
                    if (temp<A[z]):
                        t=A[z]
                        A[z]=A[z+interval]
                        A[z+interval]=t
                    else:
                        break
        i= i+1
    return A
    

a=[49,38,65,97,76,13,27,49]
a=ShellInsertSorting(a)
print(a)
