#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
const int N=1000;

struct stu{
	string name;
	int age;
	int score;
}a[N];
bool cmp(struct stu x,struct stu y){
	if(x.score==y.score){
		if(x.name==y.name){
			return x.age<y.age;
		}
		return x.name<y.name;
	}
	return x.score<y.score;
	
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			cin>>a[i].name>>a[i].age>>a[i].score;
		}
		sort(a,a+n,cmp);//±æ…Ì «…˝–Ú 
		for(int i=0;i<n;i++){
			cout<<a[i].name<<" "<<a[i].age<<" "<<a[i].score<<endl;
		}
	}
	return 0;
} 
