//���˰��Сʱ���û�������⣬�ٶ���һ�£����ִ�Ҷ�������
//�������    aPbATca  ,a*b=c 
//1.����Ŀ����1 ��PAT�� �� a=null,b=1,c=null
//2.�۲�������� PAAT  �� a=null,b=2,c=null
//3.�������� AAPATAA ,�� a=2,b=1,c=2
//4.�������� AAPAATAAAA , �� a=2,b=2,c=4
//5.�������� PT�� b=0,����
//  bA��ca����ͻȻ����һ����Ĳ²�����������ʲô��˼

//˼·��1.�ȼ����ַ����Ƿ��г� PAT ���� �������ַ�
//2.���ж�P T ����� A �ĸ����Ƿ����� a*b=c ������ 
 
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		while(n--){
			string s;
			cin>>s;
			int len=s.size(),flag=1;
			for(int i=0;i<len;i++){
				if(s[i]!='A'&&s[i]!='P'&&s[i]!='T'){
					flag=0;
					break;
				}
			}
			int countp=0,countt=0;
			int locp,loct;
			for(int i=0;i<len;i++){
				if(s[i]=='P'){
					countp++;
					locp=i;
					if(countp==2){
						flag=0;
						break;
					}
				}		
				if(s[i]=='T'){
					countt++;
					loct=i;
					if(countt==2){
						flag=0;
						break;
					}
				}
			}
			if(locp*(loct-locp-1)!=(len-loct-1)||(loct-locp)==1){
				flag=0;
			}
			
			if(flag==0){
				printf("NO\n");
			}else{
				printf("YES\n");
			}		
		}	
	}
	return 0;
}
