#include <cstdio>
#include <iostream>
#include <stack>
#include <cstring>
#include <unistd.h>
using namespace std;
stack <double> number;
stack <char> s;

int cmps[5][5]={
	0,0,0,0,0,
	1,1,1,0,0,
	1,1,1,0,0,
	1,1,1,1,1,
	1,1,1,1,1
};
int tagsure(char sym){//�ж��������� 
	int tag=0;
	switch(sym){
		case '=': tag=0;break;
		case '+': tag=1;break;
		case '-': tag=2;break;
		case '*': tag=3;break;
		case '/': tag=4;break;
		default: tag=0;break;
	}
	return tag;
}

int main(){
	string str;
	while(getline(cin,str)){
		if(str[0]==0)break;
		while(!number.empty())number.pop();
		while(!s.empty())s.pop();
		str='='+str+'=';//����β������ȼ���͵������ 
		//cout<<str<<endl;
		int length=str.length();
		int bit=0;
		for(int i=0;i<length;i++){
			if(str[i]>='0'&&str[i]<='9'){
				if(bit==0){
					number.push(str[i]-48);
					bit=1;
				}else{
					double temp;
					temp=number.top()*10+str[i]-48;
					number.pop();
					number.push(temp);
				}
			}else if(str[i]==' '){
				bit=0;
				continue;
			}else{
				bit=0;
				if(s.empty()){
					s.push(str[i]);//�ƽ�ȥ���� ��λ ��= �� �� 
				}else{
					int sym_top=tagsure(s.top());
					int sym_now=tagsure(str[i]);//ջ������������ȼ� ���� ��ǰ�����str[i]
					while(cmps[sym_top][sym_now]){
						int cal=s.top();s.pop();
						double num1=number.top();number.pop();
						double num2=number.top();number.pop();
						double result;
						switch(cal){
							case '+': result=num2+num1;break;
							case '-': result=num2-num1;break;
							case '*': result=num2*num1;break;
							case '/': result=num2/num1;break;
							default:break;
						}
						number.push(result);
					}
					s.push(str[i]);	
					sym_top=tagsure(s.top());			
				}
			}
		}
		 printf("%.2f\n",number.top());

	}
	//���հ� �� code blocks �� 
	return 0;
} 
