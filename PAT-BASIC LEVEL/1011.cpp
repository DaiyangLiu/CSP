//本题考察的是int 和long long 的范围 
//nt  在32位系统中为  4字节，也就是32位。在一些16位系统中，int 为2字节,在64位系统中int为8字节。
//已知，在32位计算机中 ，考虑正负数情况， int的范围是[-2^31~2^31-1],写成16进制[80 00 00 00,7F FF FF FF]
//显然，本题应该使用long long  
#include <cstdio>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		long long a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		bool flag;
		if(a+b>c){
			flag=true;
		}else{
			flag=false;
		}
		if(flag==true){
			printf("Case #%d: true\n",i);
		}else{
			printf("Case #%d: false\n",i);
		}
	}
	return 0;
} 
