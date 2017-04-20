#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int N=200;
bool cmp(char x,char y){
	return x<y;
}
int main(){
	char a[N];
	while(scanf("%s",a)!=EOF){
		sort(a,a+strlen(a),cmp);
		cout<<a<<endl;	
	} 
	
	return 0;
}
