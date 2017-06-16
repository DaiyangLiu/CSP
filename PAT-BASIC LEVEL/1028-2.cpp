#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct people{
	string name;
	int birthday;
	bool operator < (const struct people &b) const{
		return birthday<b.birthday;
	}
};
int main(){
	vector<people> peo;
	int N;
	scanf("%d",&N);
	int y,m,d;
	int earlist=18140906,latest=20140906,now;
	string namee;
	struct people temp;
	while(N--){
		cin>>namee;
		scanf("%d/%d/%d",&y,&m,&d);
		now=y*10000+m*100+d;
		if(now>=earlist&&now<=latest){
			temp.name=namee;
			temp.birthday=now;
			peo.push_back(temp);
		}
	}
	sort(peo.begin(),peo.end());
	if(peo.empty()!=true){
		cout<<peo.size()<<" "<<peo[0].name<<" "<<peo[peo.size()-1].name;
	}else{
		cout<<0;
	}
	
	return 0;
}
