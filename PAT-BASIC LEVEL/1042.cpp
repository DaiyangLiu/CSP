#include <cstdio>
#include <iostream>
#include <map>
#include <cctype>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	map <char ,int> zimu;
	int len=s.size();
	for(int i=0;i<len;i++){
		if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'){
			char c=tolower(s[i]);
			if(!zimu.count(c)){
				zimu.insert(pair<char,int>(c,1));
			}else{
				zimu[c]++;
			}	
		}		
	}
	
	char ans;
	int max=0;
	map<char,int> ::iterator iter;
	
	for(iter=zimu.begin();iter!=zimu.end();iter++){
		if(iter->second>max){
			max=iter->second;
			ans=iter->first;
		}else if(iter->second==max){
			if(iter->first<ans){
				ans=iter->first;
			}
		}
	}
	printf("%c %d",ans,max);
	return 0;
}
