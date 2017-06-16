#include <cstdio>

int num[10]={0};
int main(){
	int t;
	char n;
	while(scanf("%c",&n)&&n!='\n'){
		//printf("%d\n",t);
		t=n-'0';
		num[t]++;
	}
	for(int i=0;i<10;i++){
		if(num[i]==0)continue;
		printf("%d:%d\n",i,num[i]);
	}
	return 0;
}
