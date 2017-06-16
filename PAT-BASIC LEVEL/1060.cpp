#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int &x,int &y){
	return x>=y;
}
int main(){
	int N;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+N,cmp);
	int ans=0;
	for(int i=0;i<N;i++){
		if(a[i]>i+1){
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
