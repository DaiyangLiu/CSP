#include <iostream>
#include<cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n,a[100];
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
