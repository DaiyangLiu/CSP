#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
string huo[]={"tret","jan","feb","mar" ,"apr" ,"may" , "jun", "jly", "aug", "sep", "oct", "nov","dec" };
string huox[]={"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int main(){
	int N;
	scanf("%d",&N);
	getchar();
	string s;
	while(N--){
		getline(cin,s);
		if(s[0]>='0'&&s[0]<='9'){//地球数 
			int num=0;//将字符串转换为数值 
			for(int i=0;i<s.size();i++){
				num=num*10+s[i]-'0';
			} 
			int shiwei=num/13;
			int gewei=num%13;
			if(shiwei==0&&gewei==0){
				cout<<huo[gewei]<<endl;
				continue;
			}
			if(shiwei!=0&&gewei!=0){
				cout<<huox[shiwei]<<" ";
			}
			if(shiwei!=0&&gewei==0){
				cout<<huox[shiwei];
			}
			if(gewei!=0){
				cout<<huo[gewei];
			}
			cout<<endl;
		}else{//火星数 
			int pos=s.find(" ");
			if(pos!=-1){
				string gaowei=s.substr(0,pos);
				string diwei=s.substr(pos+1,s.size());
				int ans=0;
				for(int i=0;i<13;i++){
					if(gaowei==huox[i]){
						ans=ans+13*i;
						break;
					}
				}
				for(int i=0;i<13;i++){
					if(diwei==huo[i]){
						ans=ans+i;
						cout<<ans<<endl;
						break;
					}
				}
			}else{
				int flag=1;
				for(int i=0;i<13;i++){
					if(s==huo[i]){
						cout<<i<<endl;
						flag=0;
						break;
					}
				}
				if(flag==1){
					for(int i=0;i<13;i++){
						if(s==huox[i]){
							cout<<13*i<<endl;
							break;
						}
					}
				}
			}
		}
	}
	return 0;
}
