#include <cstdio>
#include <iostream>
using namespace std;

struct show{
	int ti_s;
	int ti_e;
}show[105];

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0)break;
		int num=0;
		for(int i=0;i<n;i++){
			scanf("%d%d",&show[i].ti_s,&show[i].ti_e);
		}
		
		int start=0,tag=-1,earlist;//start--��ǰ��ѡ��Ľ�Ŀ����ʼʱ��һ��Ҫ����start��
							//tag--��¼�Ƿ���ڽ�Ŀ �Ŀ�ʼʱ�� ������һ����Ŀ�Ľ���ʱ�� 
							//earlist -- ��¼����������������������ʼʱ�������һ����Ŀ�Ľ���ʱ�䣩�� ��Ŀ���������ʱ�� 
		while(1){//ѡ�����ʱ�������
			for(int i=0;i<n;i++){			
				 if(show[i].ti_s>=start){
				 	if(tag==-1){
				 		earlist=show[i].ti_e;
				 		tag=i;
					 }else{
					 	if(show[i].ti_e<earlist){
					 		earlist=show[i].ti_e;
					 		tag=i;
						 }
					 }
				 }
			} 
			if(tag==-1){
				break;
			}
			num++;
			start=earlist;
			tag=-1;	
		}
		printf("%d\n",num);		
	}
	return 0;
} 
