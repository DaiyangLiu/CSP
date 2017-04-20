#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
struct goods{
	int pound;
	int price;
	double ratio;
}goods[1005];
bool cmp(struct goods g1,struct goods g2){
	return g1.ratio>g2.ratio;
}
//此题已转移至codeblocks 
int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF){
		if(m==-1&&n==-1)break;
		
		for(int i=0;i<n;i++){
			cin>>goods[i].pound>>goods[i].price;
			goods[i].ratio=goods[i].price/goods[i].pound;
		}
		sort(goods,goods+n,cmp);//排序出了问题 
		for(int i=0;i<n;i++){
			cout<<goods[i].pound<<"  "<<goods[i].price<<endl;
		}
	}
	return 0;
}
