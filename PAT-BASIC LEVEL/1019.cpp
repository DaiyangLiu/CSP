#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int num[4];

bool cmp(int &x,int &y){
	return x>=y;
}
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		num[i]=s[i]-'0';
	}
	int a=0,b=0;
	sort(num,num+4);
	for(int i=0;i<4;i++){//ÉýÐò 
		b=b*10+num[i];
	}
	sort(num,num+4,cmp);
	for(int i=0;i<4;i++){//½µÐò 
		a=a*10+num[i];
	}
	if(a==b){
		printf("%04d - %04d = 0000\n",a,b);
		return 0;
	}
	int c=a-b;
	printf("%04d - %04d = %04d\n",a,b,c);
	
	while(c!=6174){
		for(int i=0;i<4;i++){
			num[i]=c%10;
			c=c/10;
		}
		sort(num,num+4);
		b=0;
		for(int i=0;i<4;i++){//ÉýÐò 
			b=b*10+num[i];
		}
		sort(num,num+4,cmp);
		a=0;
		for(int i=0;i<4;i++){//½µÐò 
			a=a*10+num[i];
		}
		c=a-b;
		printf("%04d - %04d = %04d\n",a,b,c);
	} 
	return 0;
}
