#include <cstdio>
#define MAX 105
int a[MAX];
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}	
		m=m%n;
		int first=1;
		for(int i=n-m;i<n;i++){
			if(first==1){
				printf("%d",a[i]);
				first=0;
			}else{
				printf(" %d",a[i]);
			}	
		}
		
		for(int i=0;i<n-m;i++){
			if(first==1){
				printf("%d",a[i]);
				first=0;
			}else{
				printf(" %d",a[i]);
			}
		}
		printf("\n");
	} 
	return 0;
}
