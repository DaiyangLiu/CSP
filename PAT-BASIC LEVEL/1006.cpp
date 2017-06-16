#include <cstdio>

int main(){
	int n;
	char b='B',s='S';
	while(scanf("%d",&n)!=EOF){
		int temp;
		if(n>=100){
			temp=n/100;
			n=n%100;
			for(int i=0;i<temp;i++){
				printf("%c",b);
			}
		}
		if(n>=10){
			temp=n/10;
			n=n%10;
			for(int i=0;i<temp;i++){
				printf("%c",s);
			}
		}
		if(n>=1){
			for(int i=1;i<=n;i++){
				printf("%d",i);
			}
		}
		printf("\n");
	}
	
	return 0;
}
