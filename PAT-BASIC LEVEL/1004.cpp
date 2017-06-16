//n的个数限制？？？要节省空间当然是用vector
//不过话又说回来，一组用例里面的成绩不会相同，而学生成绩是0-100之间的一个整数，最多也就101 
 
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

struct stu{
	string name,num;
	int score;
	bool operator <(const struct stu &b)const{
		return score<b.score;
	}
	
}stu[105];
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			cin>>stu[i].name>>stu[i].num>>stu[i].score;
		}
		sort(stu,stu+n);
		cout<<stu[n-1].name<<" "<<stu[n-1].num<<endl;
		cout<<stu[0].name<<" "<<stu[0].num<<endl;
	}
	return 0;
} 
