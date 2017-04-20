#include <cstdio>
using namespace std;

int main(){
	int m;
	long long a,b,sum;
	while(scanf("%d",&m)!=EOF&&m!=0){
		scanf("%lld%lld",&a,&b);
		sum=a+b;
		int ans[50],i=0;
		do{
			ans[i++]=sum%m;
			sum=sum/m;	
		}while(sum!=0);
		for(int j=i-1;j>=0;j--){
			printf("%d",ans[j]);
		}
		printf("\n");
		
	}
	return 0;
}
