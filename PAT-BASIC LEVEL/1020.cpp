#include <cstdio>
#include <algorithm>
#define MAX 1005
using namespace std;
struct cakee{
	double save,price;
	bool operator < (struct cakee &b)const{
		return (price/save)>(b.price/b.save);
	}
}cake[MAX];

int main(){
	int n,need;
	scanf("%d%d",&n,&need);
	for(int i=0;i<n;i++){
		scanf("%lf",&cake[i].save);
	}
	for(int i=0;i<n;i++){
		scanf("%lf",&cake[i].price);
	}
	sort(cake,cake+n);
	double get=0;
	for(int i=0;i<n;i++){
		if(cake[i].save<=need){
			get=get+cake[i].price;
			need=need-cake[i].save;
			continue;
		}
		if(cake[i].save>need){
			get=get+(cake[i].price/cake[i].save)*need;
			need=0;
		}
		if(need==0){
			break;
		}
	}
	
	printf("%.2lf\n",get);
	return 0;
}
