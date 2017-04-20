#include <cstdio>
#include <cstring>
int main(){
	int n=1000,m,temp1,temp2,flag=1;
	int buf1[4],buf2[4];
	for(;n<1112;n++){
		flag=1;
		memset(buf1,0,sizeof(buf1));
		memset(buf2,0,sizeof(buf2));
		temp1=n;
		m=n*9;
		temp2=m;
		for(int k=3;k>=0;k--){
			buf1[k]=temp1%10;
			temp1=temp1/10;
		}

		for(int k=0;k<4;k++){
			buf2[k]=temp2%10;
			temp2=temp2/10;
		}

		for(int k=0;k<4;k++){
			if(buf1[k]!=buf2[k]){
				flag=0;
			}
		}
		if(flag==1){
			printf("%d\n",n);
		}
	}
	return 0;
} 
