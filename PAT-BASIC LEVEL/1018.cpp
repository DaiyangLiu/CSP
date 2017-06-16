#include <cstdio>
#include <iostream>
using namespace std;

int a[3][3]={0,1,-1,
             -1,0,1,
			 1,-1,0};
char tr[3]={'B','C','J'};//B--0  C--1 J--2

int find(char &x){
	for(int i=0;i<3;i++){
		if(tr[i]==x){
			return i;
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int jia[3]={0};//Ê¤--0 Æ½--1 ¸º--2 
	int yi[3]={0};
	int jia_win[3]={0};//B--0  C--1 J--2
	int yi_win[3]={0};
	
	char l,r;
	for(int i=0;i<n;i++){
		cin>>l>>r;
		int x,y;
		x=find(l);
		y=find(r);
		switch(a[x][y]){
			case 0:jia[1]++;yi[1]++;
			break;
			case 1:jia[0]++;yi[2]++;jia_win[x]++;
			break;
			case -1:jia[2]++;yi[0]++;yi_win[y]++;
			break;
			default:break;
		}
	}
	printf("%d %d %d\n",jia[0],jia[1],jia[2]);
	printf("%d %d %d\n",yi[0],yi[1],yi[2]);
	
	int max=0;
	int jia_tag,yi_tag;
	for(int i=0;i<3;i++){
		if(jia_win[i]>max){
			max=jia_win[i];
			jia_tag=i;
		}
	}
	max=0;
	for(int i=0;i<3;i++){
		if(yi_win[i]>max){
			max=yi_win[i];
			yi_tag=i;
		}
	}
	printf("%c %c\n",tr[jia_tag],tr[yi_tag]);
	
	return 0;
}
