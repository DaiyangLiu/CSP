#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
//沙漏符号数 ---[3*n+n*(n-1)] *2+1
int main(){
	char c;
	int N;
	cin>>N>>c;
	int n=0,temp=0,last=0;

	for(;;n++){
		temp=(3*n+n*(n-1))*2+1;
		if(temp==N){
			last=0;
			break;
		}else if(temp>N){
			n=n-1;
			last=N-((3*n+n*(n-1))*2+1);
			break;
		}
	}

	int an=3+2*(n-1),p=0;
	int tagn=n;
	for(;tagn>0;tagn--){
        for(int i=p;i>0;i--){
            cout<<" ";
        }
        for(int i=1;i<=an;i++){
            cout<<c;
        }
        cout<<endl;
        an=an-2;
        p++;
	}
/*****************最中间的那一行 begin*********/
        for(int i=p;i>0;i--){
            cout<<" ";
        }
        for(int i=1;i<=an;i++){
            cout<<c;
        }
        cout<<endl;
        p--;
 /*****************最中间的那一行 end*********/
    tagn=n;
    an=an+2;
    for(;tagn>0;tagn--){
        for(int i=p;i>0;i--){
            cout<<" ";
        }
        for(int i=1;i<=an;i++){
            cout<<c;
        }
        p--;
        an=an+2;
        cout<<endl;
    }
    printf("%d\n",last);

	return 0;
}

