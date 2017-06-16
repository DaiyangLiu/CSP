#include <cstdio>
#include <iostream>
#include <map>
#include <cctype>
using namespace std;

int main(){
	map<char,int> broken;
	int plusjudge=0,count=0;
	string a,b;
	//cin>>a>>b;//测试样例2，第一行可能为空 
	getline(cin,a);
	getline(cin,b); 
	int a_size=a.size(),b_size=b.size();
	for(int i=0;i<a_size;i++){
		if(a[i]=='+'){
			plusjudge=1;
			broken.insert(pair<char,int>(a[i],1));
			continue;
		}
		broken.insert(pair<char,int>(a[i],1));
		if(a[i]>='A'&&a[i]<='Z'){
			broken.insert(pair<char,int>(tolower(a[i]),1));
		}
	}
	for(int i=0;i<b_size;i++){
		if(broken.count(b[i])){
			continue;
		}else{
			if(plusjudge&&(b[i]>='A'&&b[i]<='Z')){
				continue;
			}else{
				cout<<b[i];
				if(count==0){
					count=1;	
				}	
			}
		}
	}	
	if(count==0){
		cout<<endl;
	}
	return 0;
} 
