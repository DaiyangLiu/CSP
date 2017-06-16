#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

string number[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
struct num{
	int digit[1000];
	int size;
	void init(){
		size=0;
		for(int i=0;i<1000;i++){
			digit[i]=0;
		}
	}
	void add(int x){
		if(size==0){
			digit[size]=x;
			size++;
			return;
		}
		digit[0]+=x;
		int temp=0;
		for(int i=0;i<size;i++){
			digit[i]=digit[i]+temp;
			if(digit[i]<1000){
                temp=0;
			}
			if(digit[i]>=1000){
				temp=digit[i]/1000;
				//printf("temp:%d digit[i]:%d\n",temp,digit[i]);
				digit[i]=digit[i]%1000;
				//printf("i:%d ---digit[i]:%d\n",i,digit[i]);
			}
		}
		if(temp!=0){
			digit[size++]=temp;
		}

	}
	void print(){
	    printf("size:%d\n",size);
		for(int i=size-1;i>=0;i--){
			printf("%d",digit[i]);
		}
		printf("\n");
	}

    void printhzi(){
        int first=0;
        for(int i=size-1;i>=0;i--){
                int temp;
            if(digit[i]>=100){
                int tag1=100;
                for(int j=0;j<3;j++){
                    temp=digit[i]/tag1;
                    digit[i]=digit[i]%tag1;
                    tag1=tag1/10;
                    if(first==0){
                        cout<<number[temp];
                        first=1;
                    }else{
                        cout<<" "<<number[temp];
                    }
                }
            }else if(digit[i]>=10){
                int tag2=10;
                for(int j=0;j<2;j++){
                    temp=digit[i]/tag2;
                    digit[i]=digit[i]%tag2;
                    tag2=tag2/10;
                    if(first==0){
                        cout<<number[temp];
                        first=1;
                    }else{
                        cout<<" "<<number[temp];
                    }
                }

            }else{
                temp=digit[i];
                if(first==0){
                    cout<<number[temp];
                    first=1;
                }else{
                    cout<<" "<<number[temp];
                }
            }
        }
    }


};

struct num inum;
int main(){
	char n;
	inum.init();
	while(scanf("%c",&n)&&n!='\n'){
		inum.add(n-'0');
	}
	//inum.print();
	inum.printhzi();
	return 0;
}

