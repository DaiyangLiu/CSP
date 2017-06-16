#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#define MAX 10005
using namespace std;

struct people{
	string name;
	int height;
	bool operator <( const struct people b) const{
		if(height!=b.height){
			return height>b.height;
		}else{
			return name<b.name;
		}
	}
}peo[MAX];

int main(){
	string photo[12][MAX];
	int N,K;
	scanf("%d%d",&N,&K);
	for(int i=0;i<N;i++){
		cin>>peo[i].name>>peo[i].height;
	}
	sort(peo,peo+N);
//	cout<<"----------------"<<endl;
//	for(int i=0;i<N;i++){
//		cout<<peo[i].name<<" "<<peo[i].height<<endl;
//	}
	double contain=floor((double)N/(double)K);
	int first=contain+N-contain*K;//多出人的那一排的总人数 
	int isfir=1,m=K;
	int count=0,mid=floor(first/2)+1;
	int tag=mid;
	int zuo=1,you=1;
	int row=1;
	for(int i=0;i<N;i++){
		if(isfir==1){//填特殊排 
			photo[0][tag]=peo[i].name;
			count++;
			if(count%2==1){//我的左 
				tag=mid-zuo;
				zuo++;
			}else{//我的右 
				tag=mid+you;
				you++;
			}
			
			if(count==first){
				isfir=0;
				zuo=1;
				you=1;
				count=0;
				tag=floor(m/2)+1;
				mid=tag;
			}
		}else{//填普通排 
			photo[row][tag]=peo[i].name;
			count++;
			if(count%2==1){//我的左 
				tag=mid-zuo;
				zuo++;
			}else{//我的右 
				tag=mid+you;
				you++;
			}
			if(count==contain){
				count=0;
				zuo=1;
				you=1;
				tag=floor(m/2)+1;
				mid=tag;
				row++;
			}
		}
	}
	for(int i=1;i<=first;i++){
		if(i==1){
			cout<<photo[0][i];
		}else{
			cout<<" "<<photo[0][i];
		}	
	}
	cout<<endl;
	for(int i=1;i<K;i++){
		for(int j=1;j<=contain;j++){
			if(j==1){
				cout<<photo[i][j];
			}else{
				cout<<" "<<photo[i][j];
			}	
		}
		cout<<endl;
	}
	return 0;
}
