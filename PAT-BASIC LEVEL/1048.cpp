#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
//�ӣ���Ҷ�֪��Aλ��С��Bʱ��A����Ϊ��0���㣬����Bλ��С��Aʱ��ҲҪ��Bǰ��0����
int main(){
	int b[105],a[105];
	string aa,bb;
	cin>>aa>>bb;
	//�洢 ����A
	int count_a=1,count_b=1;
	for(int i=aa.size()-1;i>=0;i--){
		a[count_a++]=aa[i]-'0';
	}
	//�洢 ����B
	for(int i=bb.size()-1;i>=0;i--){
		b[count_b++]=bb[i]-'0';
	}
	int len=(count_b>count_a)?count_b:count_a;
	if(count_b<len){
		for(int i=count_b;i<len;i++){
			b[i]=0;
		}
	}
	if(count_a<len){
		for(int i=count_a;i<len;i++){
			a[i]=0;
		}
	}

	int tag=1;
	char ans[105];
	while(tag<len){
		if(tag%2!=0){//����λ
			int sum=a[tag]+b[tag];
			sum=sum%13;
			if(sum>=0&&sum<10){
				ans[tag]=sum+48;
			}else{
				if(sum==10){
					ans[tag]='J';
				}else if(sum==11){
					ans[tag]='Q';
				}else if(sum==12){
					ans[tag]='K';
				}
			}
		}else{//ż��λ
			int minu=b[tag]-a[tag];
			if(minu<0){
				minu+=10;
			}
			ans[tag]=minu+48;
		}
		tag++;
	}

	for(int i=len-1;i>=1;i--){
		printf("%c",ans[i]);
	}

	return 0;
}

