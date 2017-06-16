#include <cstdio>

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int t=0;
		while(n!=1){
			if(n%2==0){
				n=n/2;
			}else{
				n=(3*n+1)/2;
			}
			t++;
		}
		printf("%d\n",t);
	}
	return 0;
} 
