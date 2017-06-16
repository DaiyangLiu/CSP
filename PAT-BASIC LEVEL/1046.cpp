#include <cstdio>

int main(){
	int N;
	scanf("%d",&N);
	int jia_lose=0,yi_lose=0;
	int jia_han,jia_hua,yi_han,yi_hua;
	int ans;
	int jia_win,yi_win;
	while(N--){
		scanf("%d%d%d%d",&jia_han,&jia_hua,&yi_han,&yi_hua);
		ans=jia_han+yi_han;
		if(ans==jia_hua){
			jia_win=1;
		}
		if(ans==yi_hua){
			yi_win=1;
		}
		if(jia_win==1&&yi_win==0){
			yi_lose++;
		}else if(jia_win==0&&yi_win==1){
			jia_lose++;
		}
		
		jia_win=0;
		yi_win=0;
	}
	printf("%d %d",jia_lose,yi_lose);
	return 0;
}
