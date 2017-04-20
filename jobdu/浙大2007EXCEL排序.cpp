#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

const int N=100000;
struct stu{
	string num;
	string name;
	int score;
}a[N];

bool cmp1(struct stu x,struct stu y){
	return x.num<y.num;
}
bool cmp2(struct stu x,struct stu y){
	if(x.name==y.name){
		return x.num<y.num;
	}
	return x.name<y.name;
}
bool cmp3(struct stu x,struct stu y){
	if(x.score==y.score){
		return x.num<y.num;
	}
	return x.score<y.score;
}
int main(){
	int n,c,kase=0;
	while(scanf("%d%d",&n,&c)!=EOF){
		if(n==0){
			break;
		}
		for(int i=0;i<n;i++){
			cin>>a[i].num>>a[i].name>>a[i].score;
		}
		switch(c){
			case 1:sort(a,a+n,cmp1);break;
			case 2:sort(a,a+n,cmp2);break;
			case 3:sort(a,a+n,cmp3);break;
			default:break;
		}
		
		cout<<"Case "<<++kase<<":"<<endl;
		for(int i=0;i<n;i++){
			cout<<a[i].num << " "<<a[i].name<<" "<<a[i].score<<endl;
		}
	}
	return 0;
}
