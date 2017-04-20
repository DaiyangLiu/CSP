#include <cstdio>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
	ll m,n,deep_m,deep_n,depth,left,right;
	while(scanf("%lld%lld",&m,&n)!=EOF){
		if(m==0&&n==0)break;
		int ans=0;
		deep_n=(int)(log(n)/log(2)+1);//运用到的二叉树性质    二叉树深度计算    log2n+1   log2n 向下取整，代码中的除法计算自然而然向下取整 
		deep_m=(int)(log(m)/log(2)+1);
		
		//printf("depth_m %lld depth_n %lld",deep_m,deep_n);
		depth=deep_n-deep_m;
		ans=ans+pow(2.0,depth)-1;//n以上，完全二叉树的结点个数 
		left=right=m;
		for(int i=1;i<=depth;i++){
			left=2*left;
			right=right*2+1;
		}
		if(right<=n){
			ans=ans+right-left+1;
		}
		else if(n>=left){
			ans=ans+n-left+1;
		}
		printf("%d\n",ans);
	}
	return 0;
}
