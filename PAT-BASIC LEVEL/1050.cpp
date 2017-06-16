#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#define MAX 12000
using namespace std;

int main(){
	int N;
	int a[MAX];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+N);
	int m,n;
	n=sqrt(N);
	m=N/n;
	while(m*n!=N){
		n--;
		m=N/n;
	}
	
	int zuo=0,you=n-1,shang=0,xia=m-1;
	int b[10000][120];
	int r_tag=0,c_tag=0;
	int fx=1;
	for(int i=N-1;i>=0;i--){
		if(fx==1){
			b[r_tag][c_tag]=a[i];
			//printf("b[%d][%d]=%d\n",r_tag,c_tag,b[r_tag][c_tag]);
			c_tag++;
			if(c_tag>you){
				//you--;
				shang++;
				c_tag--;
				r_tag++;
				fx=2;
			}
		}else if(fx==2){
			b[r_tag][c_tag]=a[i];
			//printf("b[%d][%d]=%d\n",r_tag,c_tag,b[r_tag][c_tag]);
			r_tag++;
			if(r_tag>xia){
				//xia--;
				you--;
				r_tag--;
				c_tag--;
				fx=3;
			}
		}else if(fx==3){
			b[r_tag][c_tag]=a[i];
			//printf("b[%d][%d]=%d\n",r_tag,c_tag,b[r_tag][c_tag]);
			c_tag--;
			if(c_tag<zuo){
				xia--;

				c_tag++;
				r_tag--;
				fx=4;
			}
		}else if(fx==4){
			b[r_tag][c_tag]=a[i];
			//printf("b[%d][%d]=%d\n",r_tag,c_tag,b[r_tag][c_tag]);
			r_tag--;
			if(r_tag<shang){
				zuo++;
				r_tag++;
				c_tag++;
				fx=1;
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j==0){
				printf("%d",b[i][j]);
			}else{
				printf(" %d",b[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}

