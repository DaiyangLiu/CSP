#include <cstdio>
#include <iostream> 
#include <cstring>
#include <stack>

using namespace std;
stack <int> s;
int main(){
	int n,num;
	char act;
	string line;
	while(scanf("%d",&n)!=EOF){
		if(n==0)break;
		while(!s.empty())s.pop();
		while(n--){
			cin>>act;
			switch( act){
				case 'A': 
						if(s.empty()) {
							cout<<"E"<<endl;
							break;
						}else{
							cout<<s.top()<<endl;
							break;	
						}
				case 'P': 
						cin>>num;
						s.push(num);
				break;
				case 'O':
					if(!s.empty()){
						s.pop();
					}
				break;
				default:break;
			}
		}
		cout<<endl;
	}
	return 0;
} 
