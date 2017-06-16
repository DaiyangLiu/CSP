#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int prime[10005]={0};

struct student{
	int id;
	int tag;
	int check;
}stu[10005];

int checkPrime(){
	for(int i=2;i<10005;i++){
		if(prime[i]==0){
			for(int j=i*2;j<10005;j+=i){
				prime[j]=1;
			}	
		} 	
	}		
}
int main(){
	int N;
	for(int i=0;i<10005;i++){
		stu[i].check=-1;
	}
	checkPrime();
	scanf("%d",&N);
	struct student temp;
	for(int i=1;i<=N;i++){
		scanf("%d",&temp.id);
		if(i==1){
			temp.tag=0;
		}else{
			if(prime[i]==0){
				temp.tag=1;
			}else{
				temp.tag=2;
			}
		}
		temp.check=0;
		stu[temp.id]=temp;
	}
	int find,idd;
	scanf("%d",&find);
	for(int i=0;i<find;i++){
		scanf("%d",&idd);
		printf("%04d: ",idd);
		if(stu[idd].check==-1){
			printf("Are you kidding?\n");
		}else if(stu[idd].check==1){
			printf("Checked\n");
		}else if(stu[idd].check==0){
			if(stu[idd].tag==0){
				printf("Mystery Award\n");
			}else if(stu[idd].tag==1){
				printf("Minion\n");
			}else if(stu[idd].tag==2){
				printf("Chocolate\n");
			}
			stu[idd].check=1;
		}
	}
	
	return 0;
}
