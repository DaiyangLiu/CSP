//��һ��������������㲻һ����������ģ�Ҳ����˵���ܴ��ڷϽ�㣬
//�����Ŀû˵�����û�Ӵ��������Ŀ������˵�ǳ����Ρ�
//�ڶ��������ǳ��νӴ������⣬���ܻ�������ϸ��������
//��ת���������ֵ��Ȼ���䣬������ǰ����ĵ�ַ��Ҫ���µ���
//�������������ǧ������˷�ת�����һ�����ĵ�ַһ����Ϊ-1

//�ù̶������ڴ�ķ�ʽ�����Ǻܲ�ʹ������������û��ͨ�������г�ʱ 
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
	int tag=0;//Ҳ���Դ洢 ��Ч������ 
	//����ط����Ӷȹ���------------------------------------- 
	//ֱ����address��������һ����� ��  ����ѭ������ö� 
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
				if(times*k==tag){//��ת�������һ��Ԫ�أ�����������������һ��Ԫ�� 
					printf("-1\n"); 
				}else{//��ת�������һ��Ԫ�� 
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
 
