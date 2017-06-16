#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
string s[4];
string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};

string findweek(char c){
		return week[c-'A'];	
}

int main(){
	for(int i=0;i<4;i++){
		cin>>s[i];
	}
	int length1=s[0].size()<s[1].size() ? s[0].size():s[1].size();
	int length2=s[2].size()<s[3].size() ? s[2].size():s[3].size();
	int flag=0;
	for(int i=0;i<length1;i++){
		if(flag==0&&s[0][i]==s[1][i]&&(s[0][i]>='A'&&s[0][i]<='G')){ //星期，第一对位置相同 的 A~G 
			cout<<findweek(s[0][i])<<" ";
			flag=1;
			continue;
		}
		if(flag==1&&s[0][i]==s[1][i]&&(s[0][i]>='A'&&s[0][i]<='N'||s[0][i]>='0'&&s[0][i]<='9')){//0~9或 A~N 
			if(s[0][i]>='A'&&s[0][i]<='N'){
				cout<<s[0][i]-'A'+10<<":";
				break;
			}
			if(s[0][i]>='0'&&s[0][i]<='9'){
				cout<<"0"<<s[0][i]-'0'<<":";
				break;
			}
		}
	}
	for(int i=0;i<length2;i++){
		if(s[2][i]==s[3][i]&&(s[2][i]>='A'&&s[2][i]<='Z'||s[2][i]>='a'&&s[2][i]<='z')){
			if(i<=9){
				cout<<"0"<<i<<endl;
			}else{
				cout<<i<<endl;
			}
		}
	}
	
	
	return 0;
}
