#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int a[1005][1005];
//测试点3 abs
//测试点5 独一无二  
int main(){
	int m,n,tol;
	cin>>m>>n>>tol;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	int count=0;
	int x,y,ans;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int isok=0;
			int valid=0;

			for(int k=-1;k<=1;k++){
				if(i+k<1||i+k>n){
					continue;
				}
				for(int q=-1;q<=1;q++){
					if(j+q<1||j+q>m){
						continue;
					}				
					valid++;					
					if(abs(a[i+k][j+q]-a[i][j])>tol){
						isok++;
					}
				}
			}			
			if(isok==valid-1){
				//判断是否唯一
				int tag=0;
				for(int row=1;row<=n;row++){
					for(int col=1;col<=m;col++){
						if(a[row][col]==a[i][j]){
							tag++;
						}
					}
					if(tag==2)break;
				} 
				if(tag==1){
					count++;
					x=j;
					y=i;
					ans=a[i][j];
				}
			}
			if(count>1){
				break;	
			}

		}
		if(count>1){
			break;
		}
	}

	if(count==0){
		cout<<"Not Exist"<<endl;	
	}else if(count==1){
		cout<<"("<<x<<", "<<y<<"): "<<ans<<endl;
	}else if(count>1){
		cout<<"Not Unique"<<endl;
	}
	
	return 0;
}
