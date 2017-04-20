#include <cstdio>
#include <queue>
using namespace std;
priority_queue<int , vector<int> , greater<int> > Q;  //建立一个小顶堆 

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		while(Q.empty()==false)Q.pop();	
		for(int i=0;i<n;i++){
			int temp;
			scanf("%d",&temp);
			Q.push(temp);
		}
		int ans=0;
		while(Q.size()>1){
			int num1=Q.top();Q.pop();
			int num2=Q.top();Q.pop();
			//int num=num1+num2;
			ans+=num1+num2;
			Q.push(num1+num2);
		}
		printf("%d\n",ans); 
	} 
	
	return 0;
} 
