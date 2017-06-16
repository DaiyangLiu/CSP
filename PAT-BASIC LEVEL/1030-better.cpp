#include <cstdio>
#include <algorithm>
#define MAX 100005
using namespace std;

int main(){
	long long a[MAX],p;
	int N;
	scanf("%d%lld",&N,&p);
	for(int i=0;i<N;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+N);
	int num=0,maxn=0;
	long long flag;
	for(int i=0;i<N;i++){
		flag=a[i]*p;
		for(int j=(i+maxn-1);j<N;j++){
			if(a[j]>flag){
				break;
			}else{
				if(maxn<(j-i+1))
				maxn=j-i+1;
			}
		} 
	}
	printf("%d",maxn);
	return 0;
} 
