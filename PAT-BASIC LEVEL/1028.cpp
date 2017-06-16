#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#define MAX 111111
using namespace std;

struct peo{
	string name;
	int y,m,d;
	bool operator<(const struct peo &b)const{
		if(y!=b.y){
			return y<b.y;
		}else{
			if(m!=b.m){
				return m<b.m;
			}else{
				return d<b.d;
			}
		}
	}
}peo[MAX];

int main(){
	int N,count;
	scanf("%d",&N);
	string namee,temp;
	int yy,mm,dd;
	while(N--){
		cin>>namee;
		scanf("%4d",&yy);
		getchar();
		scanf("%2d",&mm);
		getchar();
		scanf("%2d",&dd);
		//cout<<namee<<" "<<yy<<" "<<mm<<" "<<dd<<endl;
		if(yy>1814&&yy<2014){
			peo[count].name=namee;
			peo[count].y=yy;
			peo[count].m=mm;
			peo[count].d=dd;
			count++;
		}else if(yy==1814){
			if(mm>9||(mm==9&&dd>=6)){
				peo[count].name=namee;
				peo[count].y=yy;
				peo[count].m=mm;
				peo[count].d=dd;
				count++;
			}
		}else if(yy==2014){
			if(mm<9||(mm==9&&mm<=6)){
				peo[count].name=namee;
				peo[count].y=yy;
				peo[count].m=mm;
				peo[count].d=dd;
				count++;
			}
		}
	}
	
	sort(peo,peo+count);
//	for(int i=0;i<count;i++){
//		cout<<peo[i].name<<" "<<peo[i].y<<" "<<peo[i].m<<" "<<peo[i].d<<endl;
//	}
	cout<<count<<" "<<peo[0].name<<" "<<peo[count-1].name;
	return 0;
}
