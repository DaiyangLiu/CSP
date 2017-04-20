#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct student{
	string num;
	string name;
	string gender;
	int age;
}stu[1000];

bool cmp(struct student stu1,struct student stu2){
	return stu1.num<stu2.num;
}

int main(){
	int n,m;
	
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			cin>>stu[i].num>>stu[i].name>>stu[i].gender>>stu[i].age;
		}
		sort(stu,stu+n,cmp);
		scanf("%d",&m);
		while(m--){
			string tag;
			cin>>tag;
			int start=0,end=n-1,flag=0;
			while(end>=start){
				int mid=(end+start)/2;
				if(tag>stu[mid].num){
					start=mid+1;
				}else if(tag<stu[mid].num){
					end=mid-1;
				}else{
					cout<<stu[mid].num<<" "<<stu[mid].name<<" "<<stu[mid].gender<<" "<<stu[mid].age<<endl;
					flag=1;break;
				}
			
			}	
			if(flag==0){
					cout<<"No Answer!"<<endl;
			}
		}		
	}	
//	for(int i=0;i<n;i++){
//		cout<<stu[i].num<<" "<<stu[i].name<<" "<<stu[i].gender<<" "<<stu[i].age<<endl;
//	}
	return 0;
}
