#include <cstdio>
int sheet(int &zhu,int &fu){
	int temp,ans=0;
	while(zhu!=0){
		temp=zhu%10;
		if(temp==fu){
			ans=ans*10+temp;
		}
		zhu=zhu/10;
	}
	return ans;
}

int main(){
	int a,b,da,db,pa=0,pb=0;
	scanf("%d%d%d%d",&a,&da,&b,&db);
//	while(a!=0){
//		int temp=a%10;
//		if(temp==da){
//			pa=pa*10+temp;
//		}
//		a=a/10;
//	}
//	
//	while(b!=0){
//		int temp=b%10;
//		if(temp==db){
//			pb=pb*10+temp;
//		}
//		b=b/10;
//	}
	pa=sheet(a,da);
	pb=sheet(b,db);
	printf("%d",pa+pb);
	return 0;
}
