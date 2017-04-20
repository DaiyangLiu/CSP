#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int caldays(int y,int m,int d){
	int days=1;
	int year=1,month=1,day=1;
	while(1){
		if((year%4==0&&year%100!=0)||year%400==0){
			months[2]=29;
		}else{
			months[2]=28;
		}
		if(year==y&&month==m&&day==d){
			break;
		}
		days++;day++;
		if(day==months[month]){
			if(year==y&&month==m&&day==d){
				break;
			}
			day=1;days++;
			month++;
			if(month==13){
				month=1;year++;
			}
		}
	}
	return days;
}
int main(){
	int y,m,d;
	while(scanf("%4d%2d%2d",&y,&m,&d)!=EOF){
		int days1,days2;
		days1=caldays(y,m,d);
		scanf("%4d%2d%2d",&y,&m,&d);
		days2=caldays(y,m,d);	
		cout<<abs(days2-days1)+1<<endl;
	}
	
	return 0;
} 
