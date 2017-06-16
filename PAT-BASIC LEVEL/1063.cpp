#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N;
	int a,b;
	double max,temp;
	double ans;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d%d",&a,&b);
		temp=a*a+b*b;
		if(max<temp){
			max=temp;
			ans=sqrt(temp);
		}
	} 
	printf("%.2f",ans);
	return 0;
}
