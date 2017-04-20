#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

struct show{
	int ti_s;
	int ti_e;
	bool operator < (const show &A) const{
		return ti_e<A.ti_e;
	}
}show[105];

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0)break;
		int num=0;
		for(int i=0;i<n;i++){
			scanf("%d%d",&show[i].ti_s,&show[i].ti_e);
		}
		sort(show,show+n);//将节目按 结束时间 升序排列 
	
		int current=0;
		for(int i=0;i<n;i++){
			if(show[i].ti_s>=current){
				current=show[i].ti_e;
				num++;
			}
		} 
		
		printf("%d\n",num);		
	}
	return 0;
} 
