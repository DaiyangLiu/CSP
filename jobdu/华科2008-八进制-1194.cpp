#include <cstdio>

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int ans[10],size=0;
		do{
			ans[size++]=n%8;
			n=n/8;
		}while(n!=0); 
		for(int i=size-1;i>=0;i--){
			printf("%d",ans[i]);
		}
		printf("\n");
	}
	return 0;
} 
