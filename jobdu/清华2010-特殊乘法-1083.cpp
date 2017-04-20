#include <cstdio>
using namespace std;
char num1[12],num2[12];
int main(){
	int sum;
	while(scanf("%s%s",num1,num2)!=EOF){
		sum=0;
		for(int i=0;num1[i]!=0;i++){
			for(int j=0;num2[j]!=0;j++){
				sum+=(num1[i]-'0')*(num2[j]-'0');
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
