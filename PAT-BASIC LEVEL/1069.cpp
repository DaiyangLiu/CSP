#include <cstdio>
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	int M,N,S;
	map<string ,int> luck;
	cin>>M>>N>>S;
	string name;
	int count;
	for(int i=1;i<=M;i++){
		cin>>name;
		if(S==i){
			luck.insert(pair<string,int>(name,1));
			cout<<name<<endl;
			count=0;
			continue;
		}
		count++;
		if(count==N){
			if(!luck.count(name)){
				luck.insert(pair<string,int>(name,1));
				cout<<name<<endl;
				count=0;
			}else{
				count--;
			}
		}
		
	}
	if(!luck.size()){
		cout<<"Keep going..."<<endl;
	}
	return 0;
} 
