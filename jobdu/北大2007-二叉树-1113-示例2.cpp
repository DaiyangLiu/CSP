#include <iostream>
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;
 
int main()
{
    long long m,n,sum,left,right;
    while(scanf("%lld%lld",&m,&n)!=EOF&&(m||n))
    {
      sum=0;
      int i=0;
      left=m;
      right=m;
      while(right<=n)
      {
      	  printf("i:%d pow %d\n",i,(int)pow(2.0,i)); 
      	  
          sum+=int(pow(2.0,i++));
          right=right*2+1;//右子树
          left*=2;//左子树
      }
      //下一层右子树不存在时
      while(left<=n)
      {
          sum++;
          left++;
      }
      printf("%lld\n",sum);
    }
    return 0;
}
