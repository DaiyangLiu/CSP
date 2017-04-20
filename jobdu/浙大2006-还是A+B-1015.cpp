#include <cstdio>
using namespace std;

int main(){
	int a,b,k;
	while(scanf("%d%d%d",&a,&b,&k)!=EOF){
		if(a==0&&b==0)break;
		int temp1=a,temp2=b,flag=0;
		int r1,r2; 
		if(k==0){
			printf("%d\n",a+b);
			continue;
		}
		while(k--){
			r1=temp1%10;
			r2=temp2%10;
			if(r1!=r2){
				flag=1;
				break;
			}
			temp1=temp1/10;
			temp2=temp2/10;
		}
		if(flag==1){
			printf("%d\n",a+b);
		}else if(flag==0){
			printf("-1\n");
		}
	}
	return 0;
}
