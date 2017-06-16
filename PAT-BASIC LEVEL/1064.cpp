#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

int main(){
	int N;
	map<int,int> map_n;
	int map_size=0;
	scanf("%d",&N);
	int num;
	int ans;
	for(int i=0;i<N;i++){
		ans=0;
		scanf("%d",&num);
		while(num!=0){
			ans+=num%10;
			num=num/10;
		}
		if(!map_n.count(ans)){
			map_n.insert(pair<int,int>(ans,map_size));
			map_size++;
		}
	}
	cout<<map_size<<endl;
	map<int,int>::iterator iter;
	iter=map_n.begin();
	cout<<iter->first;
	iter++;
	for(;iter!=map_n.end();iter++){
		cout<<" "<<iter->first;
	}
	return 0;
} 
