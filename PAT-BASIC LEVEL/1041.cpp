#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

struct student{
	string number;
	int shiji;
	int kaoshi;
};
int main(){
	map<int ,student> stu;
	
	int N;
	struct student temp;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		cin>>temp.number>>temp.shiji>>temp.kaoshi;
		stu.insert(pair<int,student>(temp.shiji,temp));
	}
	int M,seat;
	scanf("%d",&M);
	while(M--){
		scanf("%d",&seat);
		cout<<stu[seat].number;
		printf(" %d\n",stu[seat].kaoshi);
	}
	
	return 0;
}

 
