//n�ĸ������ƣ�����Ҫ��ʡ�ռ䵱Ȼ����vector
//��������˵������һ����������ĳɼ�������ͬ����ѧ���ɼ���0-100֮���һ�����������Ҳ��101 
 
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

struct stu{
	string name,num;
	int score;
	bool operator <(const struct stu &b)const{
		return score<b.score;
	}
	
}stu[105];
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			cin>>stu[i].name>>stu[i].num>>stu[i].score;
		}
		sort(stu,stu+n);
		cout<<stu[n-1].name<<" "<<stu[n-1].num<<endl;
		cout<<stu[0].name<<" "<<stu[0].num<<endl;
	}
	return 0;
} 
