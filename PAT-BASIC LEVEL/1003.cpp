//看了半个小时愣是没看懂题意，百度了一下，发现大家都是这样
//题意就是    aPbATca  ,a*b=c 
//1.如题目条件1 ，PAT， 则 a=null,b=1,c=null
//2.观察测试用例 PAAT  则 a=null,b=2,c=null
//3.测试用例 AAPATAA ,则 a=2,b=1,c=2
//4.测试用例 AAPAATAAAA , 则 a=2,b=2,c=4
//5.测试用例 PT， b=0,错误
//  bA，ca这样突然放在一起真的猜不出来到底是什么意思

//思路：1.先检查该字符串是否含有除 PAT 以外 的其他字符
//2.再判断P T 两侧的 A 的个数是否满足 a*b=c 的条件 
 
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		while(n--){
			string s;
			cin>>s;
			int len=s.size(),flag=1;
			for(int i=0;i<len;i++){
				if(s[i]!='A'&&s[i]!='P'&&s[i]!='T'){
					flag=0;
					break;
				}
			}
			int countp=0,countt=0;
			int locp,loct;
			for(int i=0;i<len;i++){
				if(s[i]=='P'){
					countp++;
					locp=i;
					if(countp==2){
						flag=0;
						break;
					}
				}		
				if(s[i]=='T'){
					countt++;
					loct=i;
					if(countt==2){
						flag=0;
						break;
					}
				}
			}
			if(locp*(loct-locp-1)!=(len-loct-1)||(loct-locp)==1){
				flag=0;
			}
			
			if(flag==0){
				printf("NO\n");
			}else{
				printf("YES\n");
			}		
		}	
	}
	return 0;
}
