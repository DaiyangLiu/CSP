#include <stdio.h>
#include <string.h>
#define maxn 30
int main(){
	int a[maxn][maxn],b[maxn][maxn];
	memset(a,-1,sizeof(a));
	memset(b,-1,sizeof(b));
	int n,m;
	scanf("%d%d",&n,&m);//   n 行，m  列   
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		int link=0,flag;
		for(int j=1;j<m;j++){//记录数字相同的个数（》=3），并记录相同数字的最后一位的坐标 
			if(a[i][j]==a[i][j-1]){
				link++;
				flag=j;
				if(j==m-1&&link>=2){
				for(;link>=0;link--){
					b[i][flag-link]=0;
					}
			}	
			}else if(a[i][j]!=a[i][j-1]){
				if(link>=2){
					for(;link>=0;link--){
					b[i][flag-link]=0;
					}
				}
				link=0; 
			}
		}	
		
	}
	for(int j=0;j<m;j++){
		int link=0,flag;
		for(int i=1;i<n;i++){
			if(a[i][j]==a[i-1][j]){
				link++;
				flag=i;
				if(i==n-1&&link>=2){
					for(;link>=0;link--){
					b[flag-link][j]=0;
					}
			}	
			}else if(a[i][j]!=a[i-1][j]){
				if(link>=2){
					for(;link>=0;link--){
					b[flag-link][j]=0;
					}
				}
				link=0;
			}
		}	
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(b[i][j]==0){
				a[i][j]=0;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m-1;j++){
			printf("%d ",a[i][j]);
		}
			printf("%d\n",a[i][m-1]);
	}
	return 0;
} 
