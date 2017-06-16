#include <cstdio>
#include <iostream>
#include <string>
#include <map>
using namespace std;
struct node{
	int all;
	int now;
};

int main(){
	string a,b;
	map<char,node> zhuzi;
	
	cin>>a>>b;
	int size_a=a.size(),size_b=b.size();
	struct node temp;
	for(int i=0;i<size_b;i++){
		if(zhuzi.count(b[i])){
			zhuzi[b[i]].all++;
		}else{
			temp.all=1;
			temp.now=0;
			zhuzi.insert(pair<char,node>(b[i],temp));
		}
	
	}
	int more=0;
	for(int i=0;i<size_a;i++){
		if(zhuzi.count(a[i])){
			if(zhuzi[a[i]].now<zhuzi[a[i]].all){
				zhuzi[a[i]].now++;
			}else{
				more++;
			}			
		}else{
			more++;
		}
	}
	map<char,node>::iterator iter;
	int less=0;
	for(iter=zhuzi.begin();iter!=zhuzi.end();iter++){
		if(iter->second.all>iter->second.now){
			less=less+iter->second.all-iter->second.now;
		}
	}
	if(less==0){
		printf("Yes %d\n",more);
	}else{
		printf("No %d\n",less);
	}
	return 0;
} 
