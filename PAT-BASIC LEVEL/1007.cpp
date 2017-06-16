#include <cstdio>
#define MAX 100005
int prime[MAX];
int save[MAX];
int size=0;
void primeinit(){
	for(int i=0;i<MAX;i++){
		prime[i]=0;
	}
	
	for(int i=2;i<MAX;i++){
		if(prime[i]==0){
			save[size++]=i;
			for(int j=i+i;j<MAX;j=j+i){
				prime[j]=1;
			}
		}	
	}
}

int main(){
	primeinit();
	int n;
	while(scanf("%d",&n)!=EOF){
		int ans=0;
		for(int i=1;save[i]<=n;i++){
			if((save[i]-save[i-1])==2){
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
