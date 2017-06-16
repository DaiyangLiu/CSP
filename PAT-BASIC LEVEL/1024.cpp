#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin>>s;
	size_t findE=s.find('E'); 
	int w=0;
	for(int i=findE+2;i<s.size();i++){
		w=w*10+(s[i]-'0');
	}
	if(s[findE+1]=='-'){
		if(s[0]=='-'){
			cout<<s[0];
		}
		if(w==0){
			for(int i=1;i<findE;i++){
				cout<<s[i];
			}		
		}else{
			cout<<"0.";
			for(int i=1;i<w;i++){
				cout<<"0";
			}
			for(int i=1;i<findE;i++){
				if(i==2)continue;	
				cout<<s[i];
			}
		}
	
	}else{
		if(s[0]=='-'){
			cout<<s[0];
		}
		if((findE-3)>w){
			cout<<s[1];
			if(w==0)cout<<".";
			for(int i=3;i<findE;i++){
				cout<<s[i];
				if((i-2)==w)cout<<".";
			}
		}else{
			for(int i=1;i<findE;i++){
				if(i==2)continue;
				cout<<s[i];
			}
			for(int i=1;i<=(w-(findE-3));i++){
				cout<<"0";
			}
		}
	}
	return 0;
}
