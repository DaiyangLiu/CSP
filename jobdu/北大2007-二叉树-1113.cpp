#include <cstdio> 
using namespace std;

int main(){
	int n,m;
	while(scanf("%d%d",&m,&n)!=EOF){
		if(n==0&&m==0)break;
		int left,right,sum=0;
		if(m==n){
			sum=1;
		}else{
			sum=1;
			left=2*m;
			right=2*m+1;
			while(right<n ){
				sum+=right-left+1;
				left=2*left;
				right=right*2+1;
			}
			if(n>=left)	sum+=n-left+1;//n>=left   也是关键条件 why???? 
		}
		
		printf("%d\n",sum);
		
		
	}
	return 0;
} 
