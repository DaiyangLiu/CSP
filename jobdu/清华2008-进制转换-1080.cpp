#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int m,n;
	string str;
	while(scanf("%d%d",&m,&n)!=EOF){
		cin>>str;
		int sum=0,weight=1,size=str.size(); //sum 在  int 上 装不下！！！ 
		for(int i=size-1;i>=0;i--){
			if(str[i]>='0'&&str[i]<='9'){
				sum+=(str[i]-'0')*weight;
			}else if(str[i]>='A'&&str[i]<='Z'){
				sum+=(str[i]-'A'+10)*weight;
			}else if(str[i]>='a'&&str[i]<='z'){
				sum+=(str[i]-'a'+10)*weight;
			}
			weight=weight*m;
		}
		char ans[10000];
		int temp,len=0;
		do{
			temp=sum%n;
			ans[len++]=(temp<10) ? temp+'0':temp-10+'a';
			sum=sum/n;
		}while(sum!=0);
		for(int i=len-1;i>=0;i--){
			cout<<ans[i];
		}
		cout<<endl;
		
		
	}
	return 0;
} 
