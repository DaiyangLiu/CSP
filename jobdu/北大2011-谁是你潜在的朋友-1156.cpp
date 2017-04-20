#include <cstdio>
#include <iostream>
using namespace std;
const int maxn=201;
 
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF){
		int a[maxn][maxn]={0};
		int tag[maxn]={0};	
		for(int i=1;i<=n;i++){
			int j=0;
			scanf("%d",&j);
			a[i][j]=1;
			tag[i]=j;
		}
		for(int i=1;i<=n;i++){
			int j=tag[i],fellow=0;
			for(int reader=1;reader<=n;reader++){
				fellow+=a[reader][j];
			}
			if(fellow==1){
				printf("BeiJu\n");
			}else{
				printf("%d\n",fellow-1);
			}
		}
	}
	return 0;
}
