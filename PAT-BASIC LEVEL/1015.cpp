//�� ���г�ʱ 
//��vector���ܿ��Խ������  
//�ٶȳ������֣��ʼ�洢��ʱ�򣬾Ͱ�ѧ���������洢 
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#define MAX 100000
using namespace std;

int n,l,h;

struct stu{
	string num;
	int a,b;
}stu[MAX];

int judge(struct stu &x){//�ж�ѧ������һ�� 
	if(x.a>=h&&x.b>=h){//�·� �ŷֶ����ڵ�������¼ȡ�� 
		return 1;
	}else if(x.a>=h&&x.b<h){//�ŷֲ��� h �ߣ��� �·ֵ� h �� 
		return 2;
	}else if(x.a<h&&x.b<h&&x.a>=x.b){//�·� �ŷֶ����� h �� ���ǵ·ִ��ڵ��ڲŷ� 
		return 3;
	}else{
		return 4;
	}
	
} 

bool cmp(struct stu &j,struct stu &k){
	if(judge(j)!=judge(k)){//�������ͬ��ѧ�� 
		return judge(j)<judge(k); 
	}else{  //�����ͬ��ѧ���� ���Ȱ��ֽܷ����������ܷ���ͬ���·ֽ����������·���ͬ��ѧ���������� 
		if((j.a+j.b)!=(k.a+k.b)){
			return (j.a+j.b)>(k.a+k.b);
		}else if(j.a!=k.a){
			return j.a>k.a;
		}else{
			return j.num<k.num;
		}
	}
}


int main(){
	
	int size=0;
	scanf("%d%d%d",&n,&l,&h);
	string numm;
	int aa,bb;
	for(int i=0;i<n;i++){
		cin>>numm>>aa>>bb;
		if(aa>=l&&bb>=l){//ֻ�洢�˵·� �ŷִﵽ���¼ȡ�ߵ�ѧ�� 
			stu[size].num=numm;
			stu[size].a=aa;
			stu[size].b=bb;
			size++;
		}
	}
	printf("%d\n",size);
	sort(stu,stu+size,cmp);
	for(int i=0;i<size;i++){
		cout<<stu[i].num<<" "<<stu[i].a<<" "<<stu[i].b<<endl;
	}
	
	return 0;
} 
