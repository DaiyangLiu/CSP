#include <cstdio>
#include <iostream>
using namespace std;
 
int gcd1(int a,int b){
	if(b==0){
		return a;
	}else{
		return gcd1(b,a%b);
	}	 
}
int gcd2(int a,int b){
	return a%b? gcd2(b,a%b):b;
}
int main(){
	double n1,m1,n2,m2;
	int k;
	scanf("%lf/%lf%lf/%lf%d",&n1,&m1,&n2,&m2,&k);
	double temp;
	if(n1/m1>n2/m2){
		temp=n1;
		n1=n2;
		n2=temp;
		temp=m1;
		m1=m2;
		m2=temp;
	}	
	//printf("%lf %lf %lf %lf",n1,m1,n2,m2);
	int isok;
	int first=1;
	
	for(int i=1;i<k;i++){
		isok=gcd1(k,i);
		if(isok!=1){
			continue;
		}
		//cout<<"n1*k<i*m1="<<n1*k<<" "<<i*m1<<endl;

		//cout<<"i*m2<n2*k="<<i*m2<<" "<<n2*k<<endl;

		if(n1*k<i*m1&&i*m2<n2*k){
			if(first==1){
				printf("%d/%d",i,k);
				first=0;	
			}else{
				printf(" %d/%d",i,k);
			}
		}
	}
	return 0;
}
