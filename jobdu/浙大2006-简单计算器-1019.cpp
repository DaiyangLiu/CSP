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
int tagsure(char sym){//判断运算符编号 
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
		//在字符串首尾添加最低级的运算符
		//while(!number.empty())number.pop();
		//while(!s.empty()) s.pop();
		int length=strlen(str);
		str[length]='=';
		str[length+1]='\0'; 
		int bit=0,flag=0;//bit记录数位  
		for(int i=0;str[i]!='\0';i++){
			if(str[i]>='0'&&str[i]<='9'){
				if(bit==0){//数字最高位 
					number.push(str[i]-48);
					bit++;
					cout<<" num:"<<number.top()<<endl;
				}else{//仍然为数字，但是并非最高位 
					double temp=number.top()*10+str[i]-48;
					number.pop();
					number.push(temp);
					cout<<" num:"<<number.top()<<endl;
					bit++;
				}				
			}else if(str[i]==' '){
				bit=0;
			}else{//若为运算符
				bit=0; 
//				if(s.empty()){//如果堆栈为空，说明当前运算符为算式的第一个运算符 
//					s.push(str[i]);
//				}else{//堆栈不为空，需要对栈顶运算符 与 当前运算符 的优先级进行判断 
//					int sym_top=tagsure(s.top());
//					int sym_new=tagsure(str[i]);
//					while(cmps[sym_top][sym_new]){
//						cout<<" compare"<<endl;
//						cout<<"sym_top:" <<sym_top<<endl;
//						//int sym_tag=tagsure(s.top());//确定运算符编号，在之后按照编号进行计算 
//						s.pop();
//						double num1=number.top();
//						cout<<"num1:" <<num1<<endl;
//						number.pop();
//						double num2=number.top();
//						cout<<"num2:" <<num2<<endl;
//						number.pop();
//						double result;//存储计算结果 
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
