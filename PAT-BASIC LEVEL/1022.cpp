//A+B 使用int保存也不会溢出
//只考虑进制转换即可 
#include <cstdio>
int trans[50]={0};
int size=0;

int main(){
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&d);
	c=a+b;
	if(c==0){
		printf("0");
		return 0;
	}
	int r;
	while(c!=0){
		int temp;
		temp=c/d;
		trans[size++]=c-temp*d;
		c=temp;
	}	
	for(int i=size-1;i>=0;i--){
		printf("%d",trans[i]);
	}
	return 0;
}
