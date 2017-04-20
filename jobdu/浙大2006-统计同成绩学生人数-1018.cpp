#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF&&n!=0){
		int hash[101]={0};
		int score;
		for(int i=0;i<n;i++){
			scanf("%d",&score);
			hash[score]++;
		}
		int search;
		scanf("%d",&search);
		printf("%d\n",hash[search]);
	}
	return 0;
}
