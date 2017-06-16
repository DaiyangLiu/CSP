#include <cstdio>
#include <iostream>
#include <string>
#define MAX 1005
using namespace std;

int a[MAX];
int ans[MAX];
int b,size_a=0,size_ans=0;
int main(){
	string s;
	cin>>s>>b;
	size_a=s.size();
	for(int i=0;i<size_a;i++){
		a[i]=s[i]-'0';
	}

	int q,r=0;//q存每一位商 ，r存余数 
	for(int i=0;i<size_a;i++){
		if(i==0&&a[i]<b&&size_a==1){
			ans[size_ans++]=0;
			if(a[i]==0){
				r=0;
			}else{
				r=a[i];	
			}			
			continue;
		}
		if(i==0&&a[i]<b){
			r=a[i];
			continue;
		}
		if(i==0&&a[i]>=b){
			q=a[i]/b;
			r=a[i]-q*b; 
			ans[size_ans++]=q;
			continue;
		}
		q=(r*10+a[i])/b;
		r=(r*10+a[i])-q*b;
		ans[size_ans++]=q;	
	}
	for(int i=0;i<size_ans;i++){
		printf("%d",ans[i]);
	}
	printf(" %d\n",r);
	
	
	return 0;
}
