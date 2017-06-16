#include <cstdio>
#include <iostream>
#include <string> 
#include <vector>
using namespace std;
int checkin[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char stringend[]={'1','0','X','9','8','7','6','5','4','3','2'};
int check(string &a){
	int sum=0;
	for(int i=0;i<17;i++){
		sum+=(a[i]-'0')*checkin[i];
	}
	int flag=sum%11;
	if(stringend[flag]==a[17]){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int N;
	vector<string> idin;
	vector<string> idwro;
	string temp;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		cin>>temp;
		idin.push_back(temp);
	}
	int tag;
	for(int i=0;i<N;i++){
		tag=check(idin[i]);
		if(tag==0){
			idwro.push_back(idin[i]);
		}
	}
	int idwro_size=idwro.size();
	if(idwro_size==0){
		cout<<"All passed"<<endl;
	}else{
		for(int i=0;i<idwro_size;i++){
			cout<<idwro[i]<<endl;
		}
	}
	
	return 0;
}
