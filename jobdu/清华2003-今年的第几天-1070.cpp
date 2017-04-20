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
	int y,m,d;
	int days;
	while(scanf("%d%d%d",&y,&m,&d)!=EOF){
		days=0;
		int moncont=1;
		while(moncont<m){
			days+=dayOfMonth[moncont][ISLEAP(y)];
			moncont++;
		}
		days+=d;
		cout<<days<<endl;
	}
	return 0;
}
