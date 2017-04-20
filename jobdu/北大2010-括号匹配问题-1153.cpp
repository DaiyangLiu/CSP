#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;
char str[110];
char ans[110];
stack <int> s;

int main(){
	while(scanf("%s",str)!=EOF){
		int i;
		for(i=0;str[i]!='\0';i++){
			if(str[i]=='('){
				s.push(i);
				ans[i]=' ';
			}else if(str[i]==')'){
				if(s.empty()==false){//不为空 
					s.pop();
					ans[i]=' ';			
				}else{						
					ans[i]='?';				
				}
			}else{
				ans[i]=' ';
			}
		}
		while(!s.empty()){
	 		ans[s.top()]='$';
			s.pop();
		}
		ans[i]='\0';//为什么要加一个 \0? 
		puts(str);
		puts(ans);
	} 
	return 0;
}
