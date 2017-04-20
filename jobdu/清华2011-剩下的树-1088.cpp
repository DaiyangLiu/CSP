#include <cstdio>
using namespace std;
const int LEN=10001;
int a[LEN];
int main(){
	int l,m;
	while(scanf("%d%d",&l,&m)!=EOF){
		int start,end,count=0;
		for(int i=0;i<=l;i++){
			a[i]=1;
		}
		for(int i=0;i<m;i++){
			scanf("%d%d",&start,&end);
			for(int j=start;j<=end;j++){
				a[j]=0;
			}
		}
		for(int i=0;i<=l;i++){
			if(a[i]==1){
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
