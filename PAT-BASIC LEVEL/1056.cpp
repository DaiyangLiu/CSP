#include <cstdio>
#define MAX 12
int main(){
	int N;
	int num[MAX];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&num[i]);
	}
	int sum=0;
	int a,b;
	for(int i=0;i<N-1;i++){	
		for(int j=i+1;j<N;j++){
			a=num[i];
			b=num[j];
			sum+=a*10+b;
			sum+=b*10+a;
		}
	}
	printf("%d",sum);
	return 0;
} 
