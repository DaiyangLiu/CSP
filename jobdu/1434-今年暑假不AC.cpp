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
		
		int start=0,tag=-1,earlist;//start--当前所选择的节目的起始时间一定要大于start，
							//tag--记录是否存在节目 的开始时间 大于上一个节目的结束时间 
							//earlist -- 记录遍历满足条件（条件：开始时间大于上一个节目的结束时间）的 节目的最早结束时间 
		while(1){//选择结束时间最早的
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
