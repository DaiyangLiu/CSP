#include <cstdio>
#include <iostream>
using namespace std;
int score[105];
int ans[105];
int stu[105];

int main(){
	int N,M;
	scanf("%d%d",&N,&M);
	for(int i=0;i<M;i++){
		scanf("%d",&score[i]);
	}
	for(int i=0;i<M;i++){
		scanf("%d",&ans[i]);
	}
	int defen;
	for(int i=0;i<N;i++){
		defen=0;
		for(int i=0;i<M;i++){
			scanf("%d",&stu[i]);
			if(stu[i]==ans[i]){
				defen+=score[i];
			}
		}
		printf("%d\n",defen);
	}
	return 0;
}
