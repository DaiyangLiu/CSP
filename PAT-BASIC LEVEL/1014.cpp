//前两字符串的第一对相同的大写英文字母 代表星期 A,B,C,D,E,F,G 
//前两字符串的第二对相同的大写英文字母、或数字 表示一天中的时间 0-9，A-N
//后面两个字符串的第一对相同的英文字母，出现在第n个位置（从0开始计数），表示第n分钟 

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
string s[4];
string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};

string findweek(char c){
	if(c>='A'&&c<='G'){
		return week[c-'A'];
	}else{
		return week[c-'a'];
	}
	
}

int main(){
	for(int i=0;i<4;i++){
		cin>>s[i];
	}
	int len1=s[0].size();
	int len2=s[1].size();
	int len3=s[2].size();
	int len4=s[3].size();
	
	string ans1;
	int flag=1,ans2,ans3;
	//int ok1=0;
	for(int i=0;i<len1;i++){
		//if(ok1==1)break;
		for(int j=0;j<len2;j++){
			if(s[0][i]>='A'&&s[0][i]<='G'||s[0][i]>='a'&&s[0][i]<='b'){
				if(flag==1&&s[0][i]==s[1][j]&&i==j){
					ans1=findweek(s[0][i]);
					flag=2;
				}	
			}
			if(flag==2&&s[0][i]==s[1][j]&&i==j){
				if(s[0][i]>='0'&&s[0][i]<='9'){
					ans2=s[0][i]-'0';
					//ok1=1;
					break;
				}
				if(s[0][i]>='A'&&s[0][i]<='N'){
					ans2=s[0][i]-'A'+10;
					//ok1=1;
					break;
				}
			}
		}
	}
	int ok2=0;
	for(int i=0;i<len3;i++){
		if(ok2==1)break;
		for(int j=0;j<len4;j++){
			if(s[2][i]==s[3][j]&&i==j&&(s[2][i]>='A'&&s[2][i]<='Z'||s[2][i]>='a'&&s[2][i]<='z')){
				ans3=i;
				ok2=1;
				break;
			}
		}
	}
	
	cout<<ans1;
	printf(" %02d:%02d\n",ans2,ans3);
	return 0;
}
