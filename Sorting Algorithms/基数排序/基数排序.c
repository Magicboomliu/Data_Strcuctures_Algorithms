基数排序的基本原理：


以数为例子：
[12,3,422,12,100,99,0,7777,987,44]
一共有10个数
每个数的每一位由 0-9 10个数组成

基数排序的基本过程：
（1）建立 0-9 的队列作为容器
（2）首先对所有数字个位入队，将对应元素入队对应的队列，
从 0-9 的队列依次出队。
      从而形成一个新的序列

（3）将所有的数字按照十位入队，将对应元素入队对应的队列，
然后从 0-9 的队列依次出队。
       从而形成一个新的序列，

重复，直到所有数字中最高位的位数作为标准入队，将对应的元素入队对应的队列，
然后从 0-9 的队列依次出队。。
       从而形成一个新的序列。最后得到的序列即为排好队的序列。

# 目前的缺点： 不能排带有负数的队列

# define maxsize 100
//队列的结构体
typedef struct 
{ int n；// 队列的长度
  int rear =0; //队尾
  int font =0; //对头
  int que[maxsize];
}Queue;

void Sort(int &A[],int n)
{   
  //建立是十个队列
  Queue ques[10];
  int val=0;
	int i;
	int j=1;
	int z;
while (true){

	// 将元素对应入队
	for (i=0;i<n;i++)
	{  // r代表着位数上的数字
		r =  A[i]%(10*j);
        ques[r].rear = ques[r].rear + 1;
        ques[r].que[rear] = A[i];
	}
    //循环结束的标志
	if (getlength(ques[0].que)==n){break;}
	
	// 将所有的元素出队，得到一个新的序列
	for(z=0;z<10;z++)
	{
		while (ques[z].rear!=ques[z].font)
		{
           ques[z].font=ques[z].font+1;
           // 形成一个新序列
           A[val]=ques[z][font];
           val=val+1;

		}}
    val =0;
    //当然可以使用循环队列解决这个问题.....
    for (i=0;i<10;i++){
    	ques[i].que=[];
    	ques.rear=-1;
    	ques.font=-1;
    }
	//
	j=j+1;
}

}


// Python Code
# 基数排序
class Queue(object):
    def __init__(self, rear=-1, font=-1):
        self.rear = rear
        self.font = font
        self.que = []


def Sort(A):
    # 建立是个队列
    ques = [Queue() for i in range(10)]
    val = 0
    j = 1
    while True:
        for i in range(len(A)):
            r = int(A[i] % (10 ** j) / (10 ** (j - 1)))
            ques[r].rear = ques[r].rear + 1
            w2 = ques[r].rear

            ques[r].que.append(A[i])

        # 判断循环结束的标志
        if (len(ques[0].que) == len(A)):
            break
        j = j + 1
        # 将所有的元素出队，得到一个新的序列
        for z in range(0, 10):
            while (ques[z].rear != ques[z].font):
                ques[z].font = ques[z].font + 1
                w = ques[z].font
                A[val] = ques[z].que[w]
                val = val + 1

        val = 0
        # 清空一切 再来一遍
        for i in ques:
            i.que = []
            i.rear = -1
            i.font = -1

    return A


a = [12, 3, 422, 12, 100, 99, 823, 7777, 987, 44]
a = Sort(a)
print(a)


# 算法改进（可以计算排列有负数与正数同时存在的序列）

#在 sort 函数的基础上，写出sorted函数
def Sorted(A):
    neg = []
    pos = []
    for w in A:
        if w < 0:
            neg.append(w*-1)
        else:
            pos.append(w)
    neg = Sort(neg)
    neg =[i*-1 for i in neg]
    pos = Sort(pos)
    neg.extend(pos)
    return neg

a = [12, -3, 422, 12, -100, 99, 823, 7777, 987, 44]
a = Sorted(a)
