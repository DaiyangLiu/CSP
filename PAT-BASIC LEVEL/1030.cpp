#include <cstdio>
#include <algorithm>
#define MAX 100005
using namespace std;
//大数据样例没有通过 
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
		if(maxn>=(N-i)){
			break;
		}
		num=0;
		for(int j=i;j<N;j++){
			if(a[j]<=flag){
				num++;
			}else{
				break;
			}
		}	
		if(maxn<num){
			maxn=num;
		}
	}
	printf("%d",maxn);
	return 0;
} 
