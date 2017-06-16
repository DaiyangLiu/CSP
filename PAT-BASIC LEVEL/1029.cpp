#include <cstdio>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string a,b;
	char c[100];
	cin>>a>>b;
	int a_len=a.size();
	int b_pos=0,c_size=0;
	for(int i=0;i<a_len;i++){
		if(a[i]!=b[b_pos]){
			if(a[i]>='A'&&a[i]<='z'){
				a[i]=toupper(a[i]);
			}
			int tag=0;
			for(int j=0;j<c_size;j++){
				if(c[j]==a[i])tag=1;
			}
			if(tag==0){
				c[c_size++]=a[i];
			}			
		}else{
			b_pos++;
		}	
	}
	cout<<c;
	return 0;
}
