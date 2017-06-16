#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int N;
	int valid=0;
	double sum=0;
	string temp;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int flag=1; 
		double number;
		cin>>temp;
		if(temp[0]=='-'){//可能是是负数 
			int isxs=0,xsw=0;
			number=0;
			for(int j=1;j<temp.size();j++){
				if(temp[j]>='0'&&temp[j]<='9'&&isxs==0){
					number=number*10+temp[j]-'0';
				}else if(temp[j]=='.'){
					isxs++;
					if(isxs>1){
						flag=0;
						break;
					}
				}else if(temp[j]>='0'&&temp[j]<='9'&&isxs==1){
					if(xsw==0){
						number=number+(temp[j]-'0')/10.0;
						xsw++;
					}else if(xsw==1){
						number=number+(temp[j]-'0')/100.0;
						xsw++;
					}else if(xsw==2){
						flag=0;
						break;
					}
					
				}else{
					flag=0;
					break;
				}
			}
			if(number>1000){
				flag=0;
			}
			if(flag==1){
				number=number*-1;	
			}
		}else if(temp[0]>='0'&&temp[0]<='9'){//可能是满足条件的正数 
			int isxs=0,xsw=0;
			number=0;
			for(int j=0;j<temp.size();j++){
				if(temp[j]>='0'&&temp[j]<='9'&&isxs==0){
					number=number*10+temp[j]-'0';
				}else if(temp[j]>='0'&&temp[j]<='9'&&isxs==1){
					if(xsw==0){
						number=number+(temp[j]-'0')/10.0;
						xsw++;
					}else if(xsw==1){
						number=number+(temp[j]-'0')/100.0;
						xsw++;
					}else if(xsw==2){
						flag=0;
						break;
					}
				}else if(temp[j]=='.'){
					isxs++;
					if(isxs>1){
						flag=0;
						break;
					}
				}else{
					flag=0;
					break;
				}
			}
			if(number>1000){
				flag=0;
			}
		}else{
			flag=0;
		}
			
		if(flag==0){
			cout<<"ERROR: "<<temp<<" is not a legal number"<<endl;
		}else if(flag==1){
			valid++;
			sum+=number;
		}
	}
	
	if(valid==0){
		cout<<"The average of 0 numbers is Undefined";
		
	}else if(valid==1){
		cout<<"The average of 1 number is ";
		printf("%.2f",sum/valid);
	}else{
		cout<<"The average of "<<valid<<" numbers is ";
		printf("%.2f",sum/valid);
	}
	return 0;
}
