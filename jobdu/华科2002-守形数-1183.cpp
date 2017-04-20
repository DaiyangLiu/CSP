#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int n,npow;
	while(scanf("%d",&n)!=EOF){
		npow=pow(n,2);
		int n_r,npow_r,flag=0;
		while(n){
			n_r=n%10;
			npow_r=npow%10;
			if(n_r!=npow_r){
				flag=1;
				break;
			}
			n=n/10;
			npow=npow/10;
		} 
		if(flag==0){
			printf("Yes!\n");
		}else{
			printf("No!\n");
		}
	}
	
	return 0;
}
