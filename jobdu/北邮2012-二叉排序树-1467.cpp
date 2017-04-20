#include <cstdio>
using namespace std;
struct Node{
	Node* lchild;
	Node* rchild;
	int c;
	int location;
}Tree[110];
int loc;
int fatherloc;
Node* creat(){
	Tree[loc].lchild=Tree[loc].rchild=NULL;
	Tree[loc].location=loc;
	return &Tree[loc++];
}

Node* insert(Node* T,int x){
	if(T==NULL){
		T=creat();
		T->c=x;
		if(T->location==0){
			printf("-1\n");
		}else{
			printf("%d\n",Tree[fatherloc].c);
		}
		return T; 
	}else if(x<T->c){
		fatherloc=T->location;	
		T->lchild=insert(T->lchild,x);
	}else if(x>T->c){
		fatherloc=T->location;		
		T->rchild=insert(T->rchild,x);

	}
	return T;
}

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		Node* T=NULL;
		loc=0;
		for(int i=0;i<n;i++){
			int x;
			fatherloc=-1;
			scanf("%d",&x);
			T=insert(T,x);
		}
	}
	return 0;
}
