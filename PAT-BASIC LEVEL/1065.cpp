#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
	int N;
	map <int ,int> couple;
	map <int ,int> party;
	vector<int> dog;
	scanf("%d",&N);
	int a,b;
	for(int i=0;i<N;i++){
		scanf("%d%d",&a,&b);
		couple.insert(pair<int ,int> (a,b));
		couple.insert(pair<int ,int> (b,a));
	}
	map<int,int> ::iterator iter;

	int M;
	scanf("%d",&M);
	for(int i=0;i<M;i++){
		scanf("%d",&a);
		party.insert(pair<int,int>(a,1));
	}
	for(iter=party.begin();iter!=party.end();iter++){
		if(!couple.count(iter->first)){//绝对单身狗 
			dog.push_back(iter->first);
		}else{
			if(!party.count(couple[iter->first])){//另一半没有在派对里 
				dog.push_back(iter->first);
			}
		}
	}
	cout<<dog.size()<<endl;
	vector <int> ::iterator iter2;
	if(dog.size()){//杜绝段错误 
		iter2=dog.begin();
		printf("%05d",*iter2);
		iter2++;
		for(;iter2!=dog.end();iter2++){
			printf(" %05d",*iter2);
		}	
	} 

	return 0;
}
