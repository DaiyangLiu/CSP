#include <stdio.h>
#include <string.h>
#define maxn 1000
int main(){
	int n;
	int a[maxn],b[maxn];//b数组用来储存读者访问次数，下标为读者序号 
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); 	
	}
	for(int i=0;i<n-1;i++){
		 printf("%d ",++b[a[i]]);	 
	}
	 printf("%d ",++b[a[n-1]]);
	return 0;
}
