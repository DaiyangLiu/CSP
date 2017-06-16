#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int N,D;
	double e;
	cin>>N>>e>>D;
	double may=0,certain=0;
	int days,count;
	double ee;
	for(int i=0;i<N;i++){
		scanf("%d",&days);
		count=0;
		for(int j=0;j<days;j++){
			cin>>ee;
			if(ee<e){
				count++;
			}
		}
		//cout<<i<<" count="<<count<<endl;
		if(count*2>days&&days>D){
			certain++;
		}else if(count*2>days){
			may++;
		}
	}	
	printf("%.1lf%% ",(may/N)*100);
	printf("%.1lf%%",(certain/N)*100);

	return 0;
}
