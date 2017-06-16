#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string pw;
	int count;
	cin>>pw>>count;
	string trypw;
	getchar();
	for(int i=0;i<count;i++){
		getline(cin,trypw);
		if(pw.size()!=1&&pw[0]!='#'&&trypw.size()==1&&trypw[0]=='#'){
			return 0;
		}
		if(trypw!=pw){
			
			cout<<"Wrong password: "<<trypw<<endl;	
		}else{
			cout<<"Welcome in"<<endl;
			return 0;
		}
	}
	cout<<"Account locked"<<endl;
	return 0;
} 
