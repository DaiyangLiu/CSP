#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string shou[12], yan[12], kou[12];
	string line1,line2,line3;
	string kidding="Are you kidding me? @\\/@"; 
	getline(cin,line1);//取 “手 ” 行
	getline(cin,line2);//取 “口 ” 行
	getline(cin,line3);//取 “眼 ” 行
	int size_s=1,size_y=1,size_k=1;
	//存手 
	int pos1=line1.find("[");
	int pos2;
	while(pos1<=line1.size()){
		pos2=line1.find("]",pos1);
		shou[size_s]=line1.substr(pos1+1,pos2-pos1-1);
		//cout<<size_s<<" "<<shou[size_s]<<endl;
		size_s++;
		pos1=line1.find("[",pos2);
	}
	//存眼
	pos1=line2.find("[");
	while(pos1<=line2.size()){
		pos2=line2.find("]",pos1);
		yan[size_y]=line2.substr(pos1+1,pos2-pos1-1);
		//cout<<size_y<<" "<<yan[size_y]<<endl;
		size_y++;
		pos1=line2.find("[",pos2);
	}
	//存口 
	pos1=line3.find("[");
	while(pos1<=line3.size()){
		pos2=line3.find("]",pos1);
		kou[size_k]=line3.substr(pos1+1,pos2-pos1-1);
		//cout<<size_k<<" "<<kou[size_k]<<endl;
		size_k++;
		pos1=line3.find("[",pos2);
	}
	//cout<<kidding<<endl;
	size_s--;
	size_y--;
	size_k--;	
	//cout<<"size_s "<<size_s<<" size_y "<<size_y<<" size_k "<<size_k<<endl;
	
	int N;
	int s1,y1,k,y2,s2;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d%d%d%d%d",&s1,&y1,&k,&y2,&s2);
		if((s1>=1&&s1<=size_s)&&(s2>=1&&s2<=size_s)&&(y1>=1&&y1<=size_y)&&(y2>=1&&y2<=size_y)&&(k>=1&&k<=size_k)){
			cout<<shou[s1]<<"("<<yan[y1]<<kou[k]<<yan[y2]<<")"<<shou[s2]<<endl;
		}else{
			cout<<kidding<<endl;
		}
	}
	
	return 0;
}

