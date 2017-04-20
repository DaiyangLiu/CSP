#include <cstdio>
#include <cstring>
int main(){
	int n=0,npow,flag;
	int buf[5];
	for(;n<256;n++){
		flag=1;
		npow=n*n;
		int k=0;
		while(npow){
			buf[k++]=npow%10;
			npow=npow/10;
		}
		for(int i=0;i<(k/2);i++){
			if(buf[i]!=buf[k-1-i]){
				flag=0;
			}
		}
		if(flag==1){
			printf("%d\n",n);
		}
	}
	return 0;
} 
