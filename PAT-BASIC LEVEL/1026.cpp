#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	double c1,c2;
	scanf("%lf%lf",&c1,&c2);
	double c=round((c2-c1)/100);
	int hh,mm,ss;
	hh=c/3600;
	c=c-3600*hh;
	mm=c/60;
	c=c-mm*60;
	ss=c;
	//printf("%lf",c);
	printf("%02d:%02d:%02d",hh,mm,ss);
	return 0;
} 
