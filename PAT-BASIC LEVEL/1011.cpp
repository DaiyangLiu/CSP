//���⿼�����int ��long long �ķ�Χ 
//nt  ��32λϵͳ��Ϊ  4�ֽڣ�Ҳ����32λ����һЩ16λϵͳ�У�int Ϊ2�ֽ�,��64λϵͳ��intΪ8�ֽڡ�
//��֪����32λ������� ����������������� int�ķ�Χ��[-2^31~2^31-1],д��16����[80 00 00 00,7F FF FF FF]
//��Ȼ������Ӧ��ʹ��long long  
#include <cstdio>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		long long a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		bool flag;
		if(a+b>c){
			flag=true;
		}else{
			flag=false;
		}
		if(flag==true){
			printf("Case #%d: true\n",i);
		}else{
			printf("Case #%d: false\n",i);
		}
	}
	return 0;
} 
