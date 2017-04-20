#include <iostream>
#include <cstdio>
#define ISLEAP(x) (x%4==0&&x%100!=0)||x%400==0 ?1:0
using namespace std;
int dayOfMonth[13][2]={
0,0,
31,31,
28,29,
31,31,
30,30,
31,31,
30,30,
31,31,
31,31,
30,30,
31,31,
30,30,
31,31};
int main(){
	int year,days;
	while(scanf("%d%d",&year,&days)!=EOF){
		int month=1;		
		while(days>dayOfMonth[month][ISLEAP(year)]){	
			days-=dayOfMonth[month][ISLEAP(year)];
			month++;
		}
		printf("%.4d-%.2d-%.2d\n",year,month,days);
	}
	return 0;
}
