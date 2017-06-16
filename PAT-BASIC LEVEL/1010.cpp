#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#define MAX 1005
using namespace std;
int a[MAX];
int size=0;
int main(){
	string line;
	while(getline(cin,line)){
		stringstream ss(line);
		while(ss>>a[size]){
			size++;
		}

		int first=1;
		for(int i=0;i<size-1;i=i+2){
			if(i==0&&a[i+1]==0){
				cout<<"0 0";
			}
			if(a[i+1]==0)break;
			if(first==1){
				cout<<a[i]*a[i+1]<<" "<<a[i+1]-1;
				first=0;
			}else{
				cout<<" "<<a[i]*a[i+1]<<" "<<a[i+1]-1;
			}
		}
		size=0;
		cout<<endl;
	}
	return 0;
}

