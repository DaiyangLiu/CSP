#include <cstdio>
#include <iostream>
#include <string>
#define YS 1000000007
using namespace std;
//֮ǰ�ı�����⣬ʵ���ǲ���Ч�����������ݷַ��ӱ�
//�������˼·�ǽ������ϵ�ĳ��˼·�ģ�����������ܼ�࣬˼·Ҳ������ 
int main(){
	string s;
	cin>>s;
	int len=s.size();
	int numT=0,numAT=0,numPAT=0;
	for(int i=len-1;i>=0;i--){
		if(s[i]=='T'){
			numT++;	
		}else if(s[i]=='A'){
			numAT=(numAT+numT)%YS;
		}else{
			numPAT=(numPAT+numAT)%YS;
		}
	}
	printf("%d",numPAT);
	return 0; 
}
