#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int gcd(long long a,long long b){//约分时用最小公约数
	return b!=0 ?gcd(b,a%b):a;
} 
//最后解决输出形式
void print(long long a,long long b){
	if(a==0){
		printf("0");
		return;
	}
	long long yuef=fabs(gcd(a,b));
	long long zs=a/b;
	long long yus=a%b;
	if(yus==0){
		if(zs>0){
			printf("%lld",zs);
			return;
		}else if(zs<0){
			printf("(%lld)",zs);
			return;
		}	
	}
	int fuhao;
	if(a*b>0){
		fuhao=1;
	}else{
		fuhao=0;
	}
	a=fabs(a)/yuef;
	b=fabs(b)/yuef;
	a=a-fabs(zs)*b;
	if(zs==0){
		if(fuhao==0){
			printf("(-%lld/%lld)",a,b);
			return;
		}
		printf("%lld/%lld",a,b);
		return;	
	}else if(zs>0){
		printf("%lld",zs);
		if(a!=0){
			printf(" %lld/%lld",a,b);
		}
		return;
	}else if(zs<0){
		printf("(%lld",zs);
		if(a!=0){
			printf(" %lld/%lld",a,b);
		}
		printf(")");
		return;
	}
	return;
} 

int main(){
	long long a1,b1,a2,b2;
	long long k1,k2;
	scanf("%lld/%lld%lld/%lld",&a1,&b1,&a2,&b2);
//	cout<<a1<<"/"<<b1<<endl;
//	cout<<a2<<"/"<<b2<<endl;
	long long ans1z,ans1m,ans2z,ans2m,ans3z,ans3m,ans4z,ans4m;
	//加法运算
	 ans1m= b1*b2;
	 ans1z=a1*b2+a2*b1;
	 ans2m=ans1m;
	 ans2z=a1*b2-a2*b1;
	 ans3m=ans1m;
	 ans3z=a1*a2;
	 ans4m=b1*a2;
	 ans4z=a1*b2;
//	 cout<<ans1z<<"/"<<ans1m<<endl;
//	 cout<<ans2z<<"/"<<ans2m<<endl;
//	 cout<<ans3z<<"/"<<ans3m<<endl;
//	 cout<<ans4z<<"/"<<ans4m<<endl;
	 
	 //+
	 print(a1,b1);
	 printf(" + ");
	 print(a2,b2);
	 printf(" = ");
	 print(ans1z,ans1m);
	 printf("\n");
	 //-   2/3 -4/2
	 print(a1,b1);
	 printf(" - ");
	 print(a2,b2);
	 printf(" = ");
	 print(ans2z,ans2m);
	 printf("\n");
	 //*
	 print(a1,b1);
	 printf(" * ");
	 print(a2,b2);
	 printf(" = ");
	 if(ans3z==0){
	 	printf("0\n");
	 }else{
		print(ans3z,ans3m);
		printf("\n");
	 }

	 // /
     print(a1,b1);
	 printf(" / ");
	 print(a2,b2);
	 printf(" = ");
	 if(a2==0){
	 	printf("Inf\n");
	 }else{
		print(ans4z,ans4m);
	 	printf("\n");
	 }

	return 0;
}
