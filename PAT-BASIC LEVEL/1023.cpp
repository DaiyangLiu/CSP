//���λΪ��С����������֮���λ��ʣ�µ������������м���
//10�����ֵ�����������50 ���Է��Ĵ󵨵������� 
#include <cstdio>
#include <algorithm>
using namespace std;

int num[11]={0};
int a[100]={0};
int size=0;
int main(){
	int n,first=0;
	for(int i=0;i<10;i++){
		scanf("%d",&n);
		if(first==0&&i!=0&&n>0){
			first=i;
			num[i]=n-1;
			continue;
		}
		num[i]=n;
	}	
	for(int i=0;i<10;i++){
		while(num[i]!=0){
			a[size++]=i;
			num[i]--;
		}	
	}
	sort(a,a+size);
	printf("%d",first);
	for(int i=0;i<size;i++){
		printf("%d",a[i]);
	}
	return 0;
} 
