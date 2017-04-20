#include <cstdio>
#include <cstring>
using namespace std;
int a[1010];

int main(){
	int n,d,left,right;
	while(scanf("%d",&n)!=EOF){
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&d);
		int depth=d-1;
		left=right=1;
		while(depth!=0){
			left=2*left;
			right=2*right+1;
			depth--;
		}
		//printf("left=%d   right=%d\n",left,right);
		if(n<left){
			printf("EMPTY\n");
		}else if(n>=left&&n<=right){
			for(int i=left;i<n;i++){
				printf("%d ",a[i]);
			}
			printf("%d\n",a[n]);
		}else if(n>right){
			for(int i=left;i<right;i++){
				printf("%d ",a[i]);
			}
			printf("%d\n",a[right]);
		}
	}
	return 0;
} 
