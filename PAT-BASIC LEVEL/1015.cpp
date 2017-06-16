//哈 运行超时 
//用vector可能可以解决问题  
//百度出来发现，最开始存储的时候，就把学生分了类别存储 
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

int judge(struct stu &x){//判断学生是哪一类 
	if(x.a>=h&&x.b>=h){//德分 才分都大于等于优先录取线 
		return 1;
	}else if(x.a>=h&&x.b<h){//才分不到 h 线，但 德分到 h 线 
		return 2;
	}else if(x.a<h&&x.b<h&&x.a>=x.b){//德分 才分都不到 h 线 但是德分大于等于才分 
		return 3;
	}else{
		return 4;
	}
	
} 

bool cmp(struct stu &j,struct stu &k){
	if(judge(j)!=judge(k)){//如果不是同类学生 
		return judge(j)<judge(k); 
	}else{  //如果是同类学生， 首先按总分降序排序，若总分相同按德分降序排序，若德分相同按学号升序排序 
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
		if(aa>=l&&bb>=l){//只存储了德分 才分达到最低录取线的学生 
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
