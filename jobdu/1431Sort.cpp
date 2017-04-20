#include <cstdio>
#include <iostream>
using namespace std;
const int maxn=1000001;
const int devi=500000;
int	a[maxn];

int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF){
		int count=0;
		for(int i=0;i<maxn;i++){
			a[i]=0;
		}
		for(int i=0;i<n;i++){
			int sub;
			scanf("%d",&sub);
			a[sub+devi]++;
			//printf("a[%d]:%d ",sub+devi,a[sub+devi]);
		} 
		for(int i=maxn-1;i>=0;i--){
			if(a[i]!=0){
				printf("%d",i-devi);
				count++;
				if(count==m)break;
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
