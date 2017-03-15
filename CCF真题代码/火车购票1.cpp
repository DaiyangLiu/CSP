#include <stdio.h>
#include <string.h>
#include <math.h>
#define maxn 100
int a[maxn][6];
int main(){
	int seat[101]={0};
	int seattag[21]={5,5,5,5,5,5,	5,5,5,5,5, 5,5,5,5,5, 5,5,5,5,5};//表示入座人数为零  seattag中坐标与seat中坐标的关系为：seat=seattag*5 
	//a[1]=seat[1]+..+seat[5],a[2]=seat[6]+..+seat[10],a[3]=seat[11]+..+seat[15] 
	int n;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++){//n=100,a[100],0~99
		scanf("%d",&a[i][0]);
	}
	for(int i=0;i<n;i++){
		int temp=a[i][0];
		int iscon=0; 
		for(int j=1;j<=20;j++){//查找连续座位
			if(seattag[j]>=temp){ 
				int site=1;
				iscon=1;
				for(int flag=(j-1)*5+1;temp>0;flag++){
					if(!seat[flag]){
						seat[flag]=1;
						a[i][site++]=flag;
						temp--;
						seattag[j]--;
					}
				}
				
			}		
		}
		if(iscon==0){//上面的连续座位没有查找成功，于是挨个遍历座位，用来存储。 
		int site=1;
			for(int j=1;j<101;j++){
				if(seat[j]==0){
					seat[j]=1;
					temp--;
					seattag[(int)ceil(j/5)]--;
					a[i][site++]=j;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		int j=1; 
		for(;j<a[i][0];j++){
			printf("%d ",a[i][j]);
		}	
	    	printf("%d",a[i][j]);
	printf("\n");
	}

	return 0;
} 
