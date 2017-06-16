#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct timu{
	int score;
	int num_xx;
	int num_rt;
	char zq[5];
}ti[105];

struct huizong{
	int tihao;
	int renshu;
	
	bool operator<(const struct huizong b)const{
		if(renshu!=b.renshu){
			return renshu>b.renshu;
		}else{
			return tihao<b.tihao;
		}		
	}
}huiz[105];

int main(){
	int N,M;
	for(int i=0;i<105;i++){
		huiz[i].renshu=0;
		huiz[i].tihao=i;
	}
	scanf("%d%d",&N,&M);
	for(int i=0;i<M;i++){
		cin>>ti[i].score>>ti[i].num_xx>>ti[i].num_rt;
		for(int j=0;j<ti[i].num_rt;j++){
			cin>>ti[i].zq[j];
		}
	}
//	cout<<"-----------"<<endl;
//	for(int i=0;i<M;i++){
//		cout<<ti[i].score<<" "<<ti[i].num_xx<<" "<<ti[i].num_rt<<" ";
//
//		for(int j=0;j<ti[i].num_rt;j++){
//			cout<<ti[i].zq[j]<<" ";
//		}
//		cout<<endl;
//	}
	int defen,answer;
	char xues[5];
	string s;
	char temp;
	temp=getchar();
	//cout<<temp<<endl;
	for(int i=0;i<N;i++){
		defen=0;	
		int k;
		getline(cin,s);
		int	pos1=0,pos2=0;
		for(int j=0;j<M;j++){
			answer=1;				
			pos1=s.find("(",pos2);
			//	cout<<"pos1="<<pos1<<" ";
			k=s[pos1+1]-'0';
			pos2=s.find(")",pos1);
			//	cout<<"pos2="<<pos2<<" ";
			//	cout<<k<<" "<<endl;
			if(k!=ti[j].num_rt){
				huiz[j+1].renshu++; 
			//	cout<<"k="<<k<<" num_rt="<<ti[j].num_rt<<endl;
				continue;
			}	
			pos1=pos1+3;
			for(int xxgs=0;xxgs<k;xxgs++){
				xues[xxgs]=s[pos1];
				pos1+=2;
				if(xues[xxgs]!=ti[j].zq[xxgs]){
					answer=0;
					huiz[j+1].renshu++;
					break;
				}
			}
			//cout<<"answer="<<answer<<endl;
			if(answer==1){
				defen+=ti[j].score;
			}
		}
		cout<<defen<<endl;
	}
	sort(huiz,huiz+M+1);
	
	if(huiz[0].renshu==0){
		printf("Too simple\n");
	}else{
		int max=huiz[0].renshu;
		printf("%d %d",huiz[0].renshu,huiz[0].tihao);
		for(int i=1;huiz[i].renshu==max;i++){
			printf(" %d",huiz[i].tihao);
		}
	}
	
//	for(int i=0;i<M;i++){
//		printf("%d %d ",huiz[i].renshu,huiz[i].tihao);
//	}
	
	return 0;
}
