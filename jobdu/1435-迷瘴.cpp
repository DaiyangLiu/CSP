#include <cstdio>
#include <cstring> 
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int medi[105];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,v,w;
		int result_v=0;
		double medicine=0.0,result_p=0.00;
		memset(medi,0,sizeof(medi));
		scanf("%d%d%d",&n,&v,&w);
		double dou_w=w/100.00;
		for(int i=0;i<n;i++){
			scanf("%d",&medi[i]);
		}
		sort(medi,medi+n);
		for(int i=0;i<n;i++){
			result_v+=v;
			medicine+= medi[i]/100.0*v;//药的剂量 
			double concen=medicine/result_v;
			if(concen<dou_w||fabs(concen-dou_w)<1e-8){//两浮点数比较相等的 情况比较特殊 
				result_p=concen;
			} else{
				result_v-=v;
				break;
			}			
		}
		printf("%d %.2f\n",result_v,result_p);
		
	}
	return 0;
} 
