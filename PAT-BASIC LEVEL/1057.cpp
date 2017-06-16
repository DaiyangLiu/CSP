#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int sum=0;
	string s;
	getline(cin,s);

	int len=s.size();
	for(int i=0;i<len;i++){
		if(s[i]>='A'&&s[i]<='Z'){
			sum+=s[i]-'A'+1;
		}else if(s[i]>='a'&&s[i]<='z'){
			sum+=s[i]-'a'+1;
		}
	}
	//printf("%d",sum);
	
	//二进制转换
	int num_1=0,num_0=0;
	while(sum!=0){
		if(sum%2==1){
			num_1++;
		}else{
			num_0++;
		}
		sum=sum/2;
	} 
	printf("%d %d",num_0,num_1);
	return 0;
}
