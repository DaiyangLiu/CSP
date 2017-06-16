#include <cstdio>
using namespace std;

int cmp1(int a[],int b[]){
	for(int i=0;i<3;i++){
		if(b[i]>a[i]){
			return 1;
		}else if(b[i]<a[i]){
			return 0;
		}else if(b[i]==a[i]&&i==2){
			return 1;
		}
	}
}

int main(){
	int a[3],b[3],c[3];
	scanf("%d.%d.%d",&a[0],&a[1],&a[2]);
	scanf("%d.%d.%d",&b[0],&b[1],&b[2]);
	int ans1=cmp1(a,b);
	if(ans1==1){
		for(int i=2;i>=0;i--){
			if(b[i]>=a[i]){
				c[i]=b[i]-a[i];
			}else{
				if(i==2){
					c[i]=b[i]+29-a[i];
					b[i-1]--;
				}else if(i==1){
					c[i]=b[i]+17-a[i];
					b[i-1]--;
				}
			}
		}	
		printf("%d.%d.%d\n",c[0],c[1],c[2]);
	}else{
		for(int i=2;i>=0;i--){
			if(a[i]>=b[i]){
				c[i]=a[i]-b[i];
			}else{
				if(i==2){
					c[i]=a[i]+29-b[i];
					a[i-1]--;
				}else if(i==1){
					c[i]=a[i]+17-b[i];
					a[i-1]--;
				}
			}
		}
		printf("-%d.%d.%d\n",c[0],c[1],c[2]);
	}
	return 0;
}
