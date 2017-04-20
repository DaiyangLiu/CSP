#include <cstdio>
#include <iostream> 
#include <string>
using namespace std;

int main(){
	int a,b;
	string str;
	while(scanf("%d",&a)!=EOF){
		cin>>str>>b;
		int size=str.size();
		int sum=0,M=1;
		for(int i=size-1;i>=0;i--){
			if(str[i]>='0'&&str[i]<='9'){
				sum+=(str[i]-'0')*M;
			}else if(str[i]>='A'&&str[i]<='Z'){
				sum+=(str[i]-55)*M;
			}else if(str[i]>='a'&&str[i]<='z'){
				sum+=(str[i]-87)*M;
			}	
			M=M*a;
		}

		char ans[50];
		int ans_size=0;
		do{
			int temp=sum%b;
			ans[ans_size++]=(temp<10)? temp+'0':temp-10+'A';
			sum=sum/b;
		}while(sum!=0);
		for(int i=ans_size-1;i>=0;i--){
			cout<<ans[i];
		}
		cout<<endl;
	}
	return 0;
}
