#include <cstdio> 
#include <iostream>
#include <algorithm>
using namespace std;
int blocks[605];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int l,n;
	while(scanf("%d%d",&l,&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&blocks[i]);
		}
		sort(blocks,blocks+n,cmp);
		
		int currentl=l,num=0,flag=0;
		for(int i=0;i<n;i++){
			currentl-=blocks[i];
			num++;
			if(currentl<=0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("impossible\n");
		}else{
			printf("%d\n",num);
		}
	}
	return 0;
}
