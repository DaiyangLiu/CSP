//第一条陷阱是所给结点不一定是链表里的，也就是说可能存在废结点，
//这点题目没说，如果没接触过相关题目，可以说非常隐蔽。
//第二条陷阱是初次接触这种题，可能会忘了仔细看样例：
//反转后，链表结点的值虽然不变，但是其前后结点的地址都要重新调整
//第三条陷阱就是千万别忘了反转后，最后一个结点的地址一定改为-1

//用固定分配内存的方式，还是很惨痛，大数据样例没有通过，运行超时 
#include <cstdio>
#include <algorithm>
#define MAX 100005
using namespace std;

struct node{
	int address;
	int data;
	int next;
	int num;
	bool operator < (const struct node &b)const{
		return num<b.num;
	}
}node[MAX];

int main(){
	int start,n,k;
	scanf("%d%d%d",&start,&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&node[i].address,&node[i].data,&node[i].next);
		node[i].num=111111;
	}
	int tag=0;//也可以存储 有效链表结点 
	//这个地方复杂度过高------------------------------------- 
	//直接用address来访问下一个结点 比  这样循环方便得多 
	while(start!=-1){
		for(int i=0;i<n;i++){
			if(start==node[i].address){
				node[i].num=tag++;
				start=node[i].next;
				break;
			}
		}
	}
	sort(node,node+n);
//	printf("tag:%d\n",tag);
//	for(int i=0;i<tag;i++){
//		printf("%d  %05d %d ",node[i].num,node[i].address,node[i].data);
//		if(node[i].next!=-1){
//			printf("%05d\n",node[i].next);
//		}else{
//			printf("%d\n",node[i].next);
//		}
//	}
	
	int times=tag/k;
	int count=1;
	while(count<=times){
		int flag=k;
		for(int i=count*k-1;flag>0;i--){
			printf("%05d %d ",node[i].address,node[i].data);
			if(flag>1){
				printf("%05d\n",node[i-1].address);
			}else if(flag==1&&count<times){
				printf("%05d\n",node[(count+1)*k-1].address);
			}else if(flag==1&&count==times){
				if(times*k==tag){//反转链表最后一个元素，且是整个链表的最后一个元素 
					printf("-1\n"); 
				}else{//反转链表最后一个元素 
					printf("%05d\n",node[times*k].address);
				}
			}
			flag--;
		} 
		count++;
	}
	
	for(int i=times*k;i<tag;i++){
		printf("%05d %d ",node[i].address,node[i].data);
		if(i==tag-1){
			printf("-1\n");
		}else{
			printf("%05d\n",node[i].next);
		}
	}

	return 0;
}
 
