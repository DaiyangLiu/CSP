#include <cstdio>
#include <iostream>
using namespace std;
char basket[82][82];
int main(){
	int n;
	char a,b;
	
	while(scanf("%d",&n)!=EOF){
		int sub=n/2+1,subfriend,flag=0;
		char nature;
		getchar();
		scanf("%c",&a);//flag=0
		getchar();
		scanf("%c",&b);//flag=1
		while(sub){
			if(flag==0){
				nature=a;
				flag=1;
			}else{
				nature=b;
				flag=0;
			}
			subfriend=n+1-sub;
			//ª≠…œ±ﬂ
			for(int tag=sub;tag<=subfriend;tag++){
				basket[sub][tag]=nature;
			}
			//ª≠◊Û±ﬂ
			for(int tag=sub;tag<=subfriend;tag++){
				basket[tag][sub]=nature;
			}
			//ª≠”“±ﬂ
			for(int tag=sub;tag<=subfriend;tag++){
				basket[tag][subfriend]=nature;
			}
			//ª≠œ¬±ﬂ 
			for(int tag=sub;tag<=subfriend;tag++){
				basket[subfriend][tag]=nature;
			}
			sub--;
		}
		//œ˚≥˝øΩ« 
		if(n>1){
			basket[1][1]=' ';
			basket[1][n]=' ';
			basket[n][1]=' ';
			basket[n][n]=' ';
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cout<<basket[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	
	return 0;
} 
