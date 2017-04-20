#include <cstdio>
#include <iostream>
using namespace std;
int a[105],b[105];
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int m;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		for(int i=0;i<m;i++){
			int flag=0;
			for(int j=0;j<n;j++){
				if(b[i]==a[j]){
					cout<<"YES"<<endl;
					flag=1;
					break;
				}
			}
			if(flag==0){
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
