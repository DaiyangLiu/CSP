#include <cstdio>
#define MAX 1005
int a[MAX];

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ans[6]={0};
	int tag=1,count=0,there0=0,judge=0;
	for(int i=0;i<n;i++){
		if(a[i]%5==0&&a[i]%2==0){
			ans[1]+=a[i];
			if(a[i]==0){
				there0=1;
			}
		}
		
		if(a[i]%5==1){
			ans[2]+=a[i]*tag;
			tag=-1*tag;
			judge++;
		}
		if(a[i]%5==2){
			ans[3]++;
		}
		if(a[i]%5==3){
			ans[4]+=a[i];
			count++;
		}
		if(a[i]%5==4){
			if(a[i]>ans[5]){
				ans[5]=a[i];				
			}
		}
	}
	
	for(int i=1;i<=5;i++){
		if(i==1){
			if(ans[i]==0&&there0==0){
				printf("N");
			}else{
				printf("%d",ans[i]);	
			}
		}else{
			if(ans[i]==0&&i!=2){
				printf(" N");
				continue;
			}
			if(i==2){
				if(ans[i]==0&&judge==0){
					printf(" N");	
				}else{
					printf(" %d",ans[i]);
				}
			}else if(i==4){
				float ans4;
				ans4=(float)ans[i]/count;
				printf(" %.1f",ans4);
			}else{
				printf(" %d",ans[i]);
			}
		}
		
	}	
	return 0;
}
