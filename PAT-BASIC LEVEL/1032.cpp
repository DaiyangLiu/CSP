#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#define MAX 100005
using namespace std;

int schoolNum[MAX]={};//记录学校在vector里的位置 

struct school{
	int number;
	int score;
	bool operator <(const struct school & b)const{
		return score>b.score;
	}
};
int main(){
	int N;
	vector<school> s;
	struct school temp;
	memset(schoolNum,-1,sizeof(schoolNum));
	scanf("%d",&N);
	int num,sco;
	while(N--){
		cin>>num>>sco;		
		if(schoolNum[num]==-1){
			temp.number=num;
			temp.score=sco;
			schoolNum[num]=s.size();
			s.push_back(temp);
		}else{
			s[schoolNum[num]].score+=sco;
		} 
	} 
	sort(s.begin(),s.end());
	cout<<s[0].number<<" "<<s[0].score;
	return 0;
}
