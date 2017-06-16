#include <cstdio>
#include <iostream>
#define MAX 100005
using namespace std;

int main(){
	double N;
	double a[MAX];
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	double ans=0.0;
	double times=N;
	for(int i=0;i<N;i++){
		ans+=times*(i+1)*a[i];
		times--;
	}
	printf("%.2f",ans);
	return 0;
} 
