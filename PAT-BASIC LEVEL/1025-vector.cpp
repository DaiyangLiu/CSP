#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
//����֮ǰ�ķ������ų���Ч����ʱ�临�Ӷ��Ըߣ����Ǵ������޷����޶�ʱ���ڵó���
//���ԣ�һ������֮ǰ��������ǣ����ÿռ临�ӶȻ�ȡʱ�临�Ӷ�
struct node{
	int addr;
	int data;
	int next;
}; 

int main(){
	vector<node> vin(100005);//������ȥ�����н�� ,��ʱ���ĵ�ַ��Ϊ�����vector��ĵ�ַ 
	vector<node> vsorted;//����ַ˳��洢������
	
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
				if(times*k==so_size){//��ת�������һ��Ԫ�أ�����������������һ��Ԫ�� 
					printf("-1\n"); 
				}else{//��ת�������һ��Ԫ�� 
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
