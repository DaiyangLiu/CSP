
#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

struct student{
	int num;
	int a,b;
	bool operator<(const struct student &temp)const{
		if((a+b)!=(temp.a+temp.b)){
			return (a+b)>(temp.a+temp.b);
		}else if(a!=temp.a){
			return a>temp.a;
		}else{
			return num<temp.num;
		}
	}
};

int main(){
	int n,l,h;
	int count=0;
	vector<student> v1,v2,v3,v4;
	scanf("%d%d%d",&n,&l,&h);
	
	struct student stu;
	for(int i=0;i<n;i++){//进行类别判断，分别存储学生，并且记录学生人数 
		 cin>>stu.num>>stu.a>>stu.b;
		 if(stu.a>=l&&stu.b>=l){
		 	count++;
		 	if(stu.a>=h&&stu.b>=h){
		 		v1.push_back(stu);
			 }else if(stu.a>=h){
			 	v2.push_back(stu);
			 }else if(stu.a>=stu.b){
			 	v3.push_back(stu);
			 }else{
			 	v4.push_back(stu);
			 }
		 } 
	} 
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	sort(v3.begin(),v3.end());
	sort(v4.begin(),v4.end());
	printf("%d\n",count);
	vector<student>::iterator iter;
	
	for(iter=v1.begin();iter!=v1.end();iter++){
		printf("%d %d %d\n",iter->num,iter->a,iter->b);
		//cout<<iter->num<<" "<<iter->a<<" "<<iter->b<<endl;
	}
	for(iter=v2.begin();iter!=v2.end();iter++){
		printf("%d %d %d\n",iter->num,iter->a,iter->b);
		//cout<<iter->num<<" "<<iter->a<<" "<<iter->b<<endl;
	}
	for(iter=v3.begin();iter!=v3.end();iter++){
		printf("%d %d %d\n",iter->num,iter->a,iter->b);
		//cout<<iter->num<<" "<<iter->a<<" "<<iter->b<<endl;
	}
	for(iter=v4.begin();iter!=v4.end();iter++){
		printf("%d %d %d\n",iter->num,iter->a,iter->b);
		//cout<<iter->num<<" "<<iter->a<<" "<<iter->b<<endl;
	}
	
	return 0;
}
 
