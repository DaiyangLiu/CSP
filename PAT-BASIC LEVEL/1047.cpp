#include <cstdio>
#include <algorithm>
using namespace std;

struct Team{
	int num;
	int score;
};

bool cmp(struct Team a,struct Team b){
	return a.score>b.score;
}
int main(){
	int N;
	struct Team team[1005];
	for(int i=0;i<1005;i++){
		team[i].num=i;
		team[i].score=0;
	}
	scanf("%d",&N);
	int number,member,sco;
	for(int i=0;i<N;i++){
		scanf("%d-%d%d",&number,&member,&sco);
		team[number].score+=sco;
	}
	sort(team,team+1005,cmp);
	printf("%d %d\n",team[0].num,team[0].score);
	
	return 0;
}
