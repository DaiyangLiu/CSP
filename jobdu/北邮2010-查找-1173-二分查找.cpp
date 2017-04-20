#include <cstdio>
#include <iostream>
#include <algorithm> 
using namespace std;
int a[105],b[105];

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int m;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		
		for(int i=0;i<m;i++){
			int start=0,end=n-1,flag=0,mid;
			while(end>=start){
				mid=(start+end)/2;
				if(b[i]>a[mid]){
					start=mid+1;
				}else if(b[i]<a[mid]){
					end=mid-1;
				}else if(b[i]==a[mid]){
					flag=1;
					cout<<"YES"<<endl;
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
