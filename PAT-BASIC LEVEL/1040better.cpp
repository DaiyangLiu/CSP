#include <cstdio>
#include <iostream>
#include <string>
#define YS 1000000007
using namespace std;
//之前的暴力求解，实在是不高效，遇到大数据分分钟崩
//现在这个思路是借用网上的某个思路的，逆序遍历，很简洁，思路也很清晰 
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
