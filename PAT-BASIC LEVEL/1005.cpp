#include <cstdio>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

map <int,int> cal;
int ans[100],size;
void init(){
	size=0;
	for(int i=0;i<100;i++){
		ans[i]=0;
	}
} 
bool cmp(int &a,int &b){
	return a>b;
}

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		init();
		int x;	
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			cal.insert(pair<int,int>(x,0));
		}
		map<int,int>::iterator iter;
		for(iter=cal.begin();iter!=cal.end();iter++){
			//cout<<iter->first<<"  "<<iter->second<<endl;
			int temp=iter->first;
			map<int,int>::iterator i;
			while(temp!=1){
				if(temp%2==0){
					temp=temp/2;		
					i=cal.find(temp);
					if(i!=cal.end()){
						i->second=1;
					}
				}else{
					temp=(temp*3+1)/2;
					i=cal.find(temp);
					if(i!=cal.end()){
						i->second=1;
					}
				}
			}
			
		}
		
		for(iter=cal.begin();iter!=cal.end();iter++){
			if(iter->second==0){
				ans[size++]=iter->first;
			}
		}
		sort(ans,ans+size,cmp);
		
		for(int i=0;i<size-1;i++){
			cout<<ans[i]<<" ";
		}
		cout<<ans[size-1]<<endl;
	}
	
	
	return 0;
}
