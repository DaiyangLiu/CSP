#include <cstdio>
#include <iostream>
#include <string>
#include <map> 
#define YS 1000000007
using namespace std;

int main(){
  map <int ,int> p,a,t;
  string s;
  cin>>s;
  int size_s=s.size();
  long long pos_p=0,pos_a=0,pos_t=0;
  for(int i=0;i<size_s;i++){
    if(s[i]=='P'){
      p.insert(pair<int,int>(i,pos_p));
      pos_p++;
    }else if(s[i]=='A'){
      a.insert(pair<int,int>(i,pos_a));
      pos_a++;
    }else if(s[i]=='T'){
      t.insert(pair<int,int>(i,pos_t));
      pos_t++;
    }
  }
  
  map<int,int>::iterator iter1,iter2,iter3;
  long long ans=0;
  for(iter1=p.begin();iter1!=p.end();iter1++){//find a P
    //find a A
    for(iter2=a.begin();iter2!=a.end();iter2++){
      if(iter2->first>iter1->first){
        //how many T behind the A(iter2->first)
        for(iter3=t.begin();iter3!=t.end();iter3++){
          if(iter3->first>iter2->first){
            ans=ans%YS+pos_t%YS-iter3->second%YS;
            break;
          }
        }
      }
    } 
    
  }
  cout<<ans<<endl;
  return 0;
}

