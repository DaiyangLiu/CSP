#include <cstdio>
#define MAX 100005
int score[102];
int check[MAX];
int main(){
	int N,temp;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&temp);
		score[temp]++;
	}	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&check[i]);
	}
	printf("%d",score[check[0]]);
	for(int i=1;i<n;i++){
		printf(" %d",score[check[i]]);
	}
	return 0;
}
