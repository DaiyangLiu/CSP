#include <cstdio>
#include <algorithm>
#define MAX 100005
using namespace std;

//主元的位置，在数列完全排好序之后，位置是不变的。所以只需要
//比较读入数组与排好序的数组，找到相同元素，并且检查该元素是不是
//从第0个到该元素中最大的元素，如果是，则它是主元 
int a[MAX],b[MAX];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	sort(b,b+N);
	int count=0,max=0,res[MAX];
	for(int i=0;i<N;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(max==a[i]&&a[i]==b[i]){
			res[count++]=a[i];
		}
	}
	printf("%d\n",count);
	
	for(int i=0;i<count;i++){
		if(i==0){
			printf("%d",res[i]);
		}else{
			printf(" %d",res[i]);
		}	
	}
	printf("\n");
	return 0;
} 
