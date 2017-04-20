#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib> 
#define ISLEAP(x) (x%4==0&&x%100!=0)||x%400==0 ? 1:0
using namespace std;

char week[7][15]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
char month[13][15]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
int months[13][2]={
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
31,31
};

struct Date{
	int y,m,d;
	void nextday(){
		d++;
		if(d>months[m][ISLEAP(y)]){
			m++;
			d=1;
			if(m>12){
				y++;
				m=1;
			} 
		}	
	}
};
int buf[3001][13][33];
int main(){
	Date tmp;
	tmp.y=0;
	tmp.m=1;
	tmp.d=1;
	int cnt=0;
	while(tmp.y!=3001){//其实我们并不知道0年1月1日是星期几 
		buf[tmp.y][tmp.m][tmp.d]=cnt;
		tmp.nextday();
		cnt++;
	}
	int day,year,mon,all,dayofweek;	
	char s[15];
	while(scanf("%d%s%d",&day,s,&year)!=EOF){
		for(int i=1;i<13;i++){
			if(strcmp(s,month[i])==0){
				mon=i;break;
			}
		}
		all=buf[year][mon][day]-buf[2001][10][14];//两天的天数间隔，可能为负  
		if(all>=0){
			dayofweek=abs(all)%7;			
		}else{
			if(abs(all)%7==0){
				dayofweek=0;	
			}else{
				dayofweek=7-abs(all)%7;
			}	
		}
		cout<<week[dayofweek]<<endl;
	}
	return 0;
} 
