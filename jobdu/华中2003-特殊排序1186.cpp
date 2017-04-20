#include <iostream>
#include <cstdio>
#include <algorithm>
const int N=1000;
using namespace std;
int main(){
	int n,a[1000];
	while(scanf("%d",&n)!=EOF){
	
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<a[n-1]<<endl;
		if(n==1){
			cout<<-1<<endl;
			continue;
		}
		for(int i=0;i<n-2;i++){
			cout<<a[i]<<" ";
		}
		cout<<a[n-2]<<endl;
	}
	return 0;
}
