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
	int N,K;
	scanf("%d%d",&N,&K);
	for(int i=0;i<N;i++){
		cin>>peo[i].name>>peo[i].height;
	}
	sort(peo,peo+N);	
	int col=N/K;
	int final=N/K+(N%K);
	string result="";
	for(int i=0;i<N;){
		if(i==0){
			result=peo[i].name;
			i++;
			for(int j=1;j<final;j++){
				if(j%2==1){
					result=peo[i].name+" "+result;
					i++;
				}else{
					result=result+" "+peo[i].name;
					i++;
				}
			}
			cout<<result<<endl;
		}else{
			result=peo[i].name;
			i++;
			for(int j=1;j<col;j++){
				if(j%2==1){
					result=peo[i].name+" "+result;
					i++;
				}else{
					result=result+" "+peo[i].name;
					i++;
				}
			}
			cout<<result<<endl;
		}	
	}
	return 0;
}
