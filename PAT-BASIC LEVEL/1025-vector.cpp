#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
//依照之前的方法，排出有效结点的时间复杂度略高，考虑大数据无法在限定时间内得出答案
//所以，一个基于之前的设想就是，利用空间复杂度换取时间复杂度
struct node{
	int addr;
	int data;
	int next;
}; 

int main(){
	vector<node> vin(100005);//保存存进去的所有结点 ,此时结点的地址即为在这个vector里的地址 
	vector<node> vsorted;//按地址顺序存储链表结点
	
	int first,n,k;
	cin>>first>>n>>k;
	struct node temp;
	for(int i=0;i<n;i++){
		cin>>temp.addr>>temp.data>>temp.next;
		vin[temp.addr]=temp;
	} 
	
	while(first!=-1){
		temp=vin[first];
		vsorted.push_back(temp);
		first=temp.next;
	}
	
	int so_size=vsorted.size();
//	for(int i=0;i<so_size;i++){
//		printf("%05d %d %05d\n",vsorted[i].addr,vsorted[i].data,vsorted[i].next);
//	}
	int times=so_size/k;
	int count=1;
	while(count<=times){
		int flag=k;
		for(int i=count*k-1;flag>0;i--){
			printf("%05d %d ",vsorted[i].addr,vsorted[i].data);
			if(flag>1){
				printf("%05d\n",vsorted[i-1].addr);
			}else if(flag==1&&count<times){
				printf("%05d\n",vsorted[(count+1)*k-1].addr);
			}else if(flag==1&&count==times){
				if(times*k==so_size){//反转链表最后一个元素，且是整个链表的最后一个元素 
					printf("-1\n"); 
				}else{//反转链表最后一个元素 
					printf("%05d\n",vsorted[times*k].addr);
				}
			}
			flag--;
		}
		count++;
	}
	
	for(int i=times*k;i<so_size;i++){
		printf("%05d %d ",vsorted[i].addr,vsorted[i].data);
		if(i==so_size-1){
			printf("-1\n");
		}else{
			printf("%05d\n",vsorted[i].next);
		}
	}
	return 0;
} 
