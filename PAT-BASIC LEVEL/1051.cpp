#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
//�����ڶ�����������   ��� b�Ƿ��������-0.00
// ������һ����������   ��� a�Ƿ��������-0.00
 
int main(){
	double r1,p1,r2,p2;
	cin>>r1>>p1>>r2>>p2;
	double a,b;
	a=r1*r2*cos(p1+p2);
	b=r1*r2*sin(p1+p2);	
	if(a>-0.005&&a<0){
		a=0;
	}
	if(b>-0.005&&b<0){
		b=0;
	}
	printf("%.2f",a);
	if(b>=0){
		printf("+%.2fi",b);
	}else{
		printf("%.2fi",b);
	}

	return 0;
} 
