#include <cstdio>
#include <algorithm>
#define MAX 100005
using namespace std;

//��Ԫ��λ�ã���������ȫ�ź���֮��λ���ǲ���ġ�����ֻ��Ҫ
//�Ƚ϶����������ź�������飬�ҵ���ͬԪ�أ����Ҽ���Ԫ���ǲ���
//�ӵ�0������Ԫ��������Ԫ�أ�����ǣ���������Ԫ 
int a[MAX],b[MAX];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	sort(b,b+N);
	int count=0,max=0,res[MAX];
	for(int i=0;i<N;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(max==a[i]&&a[i]==b[i]){
			res[count++]=a[i];
		}
	}
	printf("%d\n",count);
	
	for(int i=0;i<count;i++){
		if(i==0){
			printf("%d",res[i]);
		}else{
			printf(" %d",res[i]);
		}	
	}
	printf("\n");
	return 0;
} 
