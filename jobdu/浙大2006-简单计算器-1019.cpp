#include <cstdio>
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
stack <double> number;
stack <char> s;
char str[210];
int cmps[5][5]={
	0,0,0,0,0,
	1,1,1,0,0,
	1,1,1,0,0,
	1,1,1,1,1,
	1,1,1,1,1
};
int tagsure(char sym){//�ж��������� 
	switch(sym){
		case '=': return 0;
		case '+': return 1;
		case '-': return 2;
		case '*': return 3;
		case '/': return 4;
		default: return 0;
	}
}

int main(){
	while(scanf("%s",str)!=EOF){
		if(str[0]==0&&str[1]=='\0')break;
		//���ַ�����β�����ͼ��������
		//while(!number.empty())number.pop();
		//while(!s.empty()) s.pop();
		int length=strlen(str);
		str[length]='=';
		str[length+1]='\0'; 
		int bit=0,flag=0;//bit��¼��λ  
		for(int i=0;str[i]!='\0';i++){
			if(str[i]>='0'&&str[i]<='9'){
				if(bit==0){//�������λ 
					number.push(str[i]-48);
					bit++;
					cout<<" num:"<<number.top()<<endl;
				}else{//��ȻΪ���֣����ǲ������λ 
					double temp=number.top()*10+str[i]-48;
					number.pop();
					number.push(temp);
					cout<<" num:"<<number.top()<<endl;
					bit++;
				}				
			}else if(str[i]==' '){
				bit=0;
			}else{//��Ϊ�����
				bit=0; 
//				if(s.empty()){//�����ջΪ�գ�˵����ǰ�����Ϊ��ʽ�ĵ�һ������� 
//					s.push(str[i]);
//				}else{//��ջ��Ϊ�գ���Ҫ��ջ������� �� ��ǰ����� �����ȼ������ж� 
//					int sym_top=tagsure(s.top());
//					int sym_new=tagsure(str[i]);
//					while(cmps[sym_top][sym_new]){
//						cout<<" compare"<<endl;
//						cout<<"sym_top:" <<sym_top<<endl;
//						//int sym_tag=tagsure(s.top());//ȷ���������ţ���֮���ձ�Ž��м��� 
//						s.pop();
//						double num1=number.top();
//						cout<<"num1:" <<num1<<endl;
//						number.pop();
//						double num2=number.top();
//						cout<<"num2:" <<num2<<endl;
//						number.pop();
//						double result;//�洢������ 
//						switch(sym_top){
//							case '0':break;
//							case '1': result=num2+num1;break;
//							case '2': result=num2-num1;break;
//							case '3': result=num2*num1;break;
//							case '4': result=num2/num1;break;
//							default:break;
//						}
//						number.push(result);
//						sym_top=tagsure(s.top()); 
//					}
//					s.push(str[i]);
//					if(s.top()=='='){
//						printf("%.2f",number.top());	break;
//					}		
//				}		
			}
		}
		while(!number.empty()){
			cout<<" "<<number.top();
			number.pop();
		}
	}
	return 0;
} 
