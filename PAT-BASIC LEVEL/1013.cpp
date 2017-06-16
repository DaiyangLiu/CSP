#include <cstdio>
#include <cstring>
#define MAX 1050000
#define max 10005
int number[MAX];
int prime[max];
int size=1;
void primeinit(){
	memset(number,0,sizeof(number));
	for(int i=2;i<MAX;i++){
		if(number[i]==0){
			prime[size++]=i;
			if(size==10002)break;
			if(i<=10000){
				for(int j=i*i;j<MAX;j=j+i){
					number[j]=1;
				}
			}

		}
	}
	
}

int main(){
	primeinit();
	//printf("%d",prime[10000]);
	int m,n;
	scanf("%d%d",&m,&n);
	int count=0,first=1;
	for(int i=m;i<=n;i++){
		if(first==1){
			printf("%d",prime[i]);
			first=0;
			count++;
		}else{
			printf(" %d",prime[i]);
			count++;
			if(count==10){
				count=0;
				first=1;
				printf("\n");
			} 
		}
		
	}
	return 0;
}
