#include <cstdio>
#include <iostream>
using namespace std;
int a[85],b[80];

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		while(n--){
			int k,point=0;
			scanf("%d",&k);
			for(int i=0;i<k;i++){
				scanf("%d",&a[i]);
			}	
			for(int i=0;i<k;i++){
				if(i==0){
					if(a[i]!=a[i+1]){ 
						b[point]=i;
						point++;				
					}
					continue;
				}else if(i==k-1){
					if(a[i]!=a[i-1]){
						b[point]=i;	
						point++;		
					}
					break;
				}else{
					if((a[i-1]>a[i]&&a[i+1]>a[i])||(a[i-1]<a[i]&&a[i+1]<a[i])){
						b[point]=i;	
						point++;
					}	
				}
			} 
			for(int i=0;i<point-1;i++){
				cout<<b[i]<<" ";
			}
			cout<<b[point-1]<<endl;
		}
	}
	return 0;
}
