#include <cstdio>
#include <iostream>
using namespace std;
int ans[505][505];

int main(){
	int m,n;
	int a,b,t;
	scanf("%d%d%d%d%d",&m,&n,&a,&b,&t);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&ans[i][j]);
			if(ans[i][j]>=a&&ans[i][j]<=b){
				ans[i][j]=t;
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j==0){
				printf("%03d",ans[i][j]);
			}else{
				printf(" %03d",ans[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
} 
