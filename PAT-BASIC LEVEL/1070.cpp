#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
const int MAX=10004;
double a[MAX];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%lf",&a[i]);
	}
	sort(a,a+N);
	for(int i=0;i<N-1;i++){
		a[i+1]=floor((a[i]+a[i+1])/2);
		//cout<<a[i+1]<<endl;
	}
	printf("%.0lf",a[N-1]);
	return 0;
	
}
