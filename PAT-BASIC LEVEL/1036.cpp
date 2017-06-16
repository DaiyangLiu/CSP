#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N;
	char c;
	scanf("%d",&N);
	getchar();
	c=getchar();
	//printf("%d%c",N,c);
	double width=round(N/2.0);
	//printf("%f\n",width);
	for(int i=0;i<N;i++){
		printf("%c",c);
	}
	printf("\n");
	for(int i=0;i<(width-2);i++){
		printf("%c",c);
		for(int j=0;j<(N-2);j++){
			printf(" ");
		}
		printf("%c\n",c);
	}
	for(int i=0;i<N;i++){
		printf("%c",c);
	}
	return 0;
} 
