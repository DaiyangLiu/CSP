#include <cstdio>
#include <iostream>
#include <algorithm>
#define MAX 105
using namespace std;

int a[MAX],b[MAX];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
	 	scanf("%d",&a[i]);
	}
	for(int i=0;i<N;i++){
	 	scanf("%d",&b[i]);
	}
	int is1=1,tag;
	for(int i=1;i<N;i++){
		if(b[i]<b[i-1]){
			tag=i;
			break;
		}
	}
	for(int i=tag;i<N;i++){
		if(b[i]!=a[i]){
			is1=0;
			break;
		}
	}
	if(is1==1){
		printf("Insertion Sort\n");
		int n=tag+1;
		sort(b,b+n);
		printf("%d",b[0]);
		for(int i=1;i<N;i++){
			printf(" %d",b[i]);
		}		
	}else{
		printf("Merge Sort\n");
		int isok=0,k=1;
		while(isok==0){
			isok=1;	
			for(int i=0;i<N;i++){
				if(a[i]!=b[i]){
					isok=0;
					break;
				}
			}
			k*=2;
			int left_min;
			for(left_min=0;(left_min+k-1)<N;left_min+=k){
				sort(a+left_min,a+left_min+k);
			}
			if(left_min<N){
				sort(a+left_min,a+N);
			}
		}
 
		printf("%d",a[0]);
		for(int i=1;i<N;i++){
			printf(" %d",a[i]);
		}
		
	}
	return 0;
}
