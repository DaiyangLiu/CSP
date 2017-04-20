#include <cstdio>
#include <iostream>
using namespace std;
const int maxn=200;
int a[200];
int main(){
	int n,tag;
	while(scanf("%d",&n)!=EOF){
		int ans=-1;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&tag);
		for(int i=0;i<n;i++){
			if(tag==a[i]){
				ans=i;
				break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
