#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	while(getline(cin,str)){
		if(str[0]=='0')break;	
		int l=str.size(),k=1,temp;
		while(l>1){
			temp=str[l-k]+str[0];
			if((temp-96)<10){
				str[l-k]='0';
				str[0]=temp-48;
				l--;
			}else{
				str[l-k]=(temp-96)%10+48;
				str[0]=49;
			}			
		}
		cout<<str[0]<<endl;
	}
	return 0;
} 
