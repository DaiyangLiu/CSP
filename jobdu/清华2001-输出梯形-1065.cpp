#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int h,edge,large;
	while(scanf("%d",&h)!=EOF){
		edge=h;
		large=h+(h-1)*2;
		for(int i=1;i<=h;i++){
			for(int j=1;j<=large-edge;j++){
				cout<<" ";
			}
			for(int j=1;j<=edge;j++){
				cout<<"*";
			}
		 	edge=edge+2;
			cout<<endl;
		}	
	} 
	
	return 0;
} 
