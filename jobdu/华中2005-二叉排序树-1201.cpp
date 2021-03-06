#include <cstdio> 
#include <cstring>
using namespace std;
struct Node{
	Node *lchild;
	Node *rchild;
	int c;
}Tree[110];
int loc;

Node * creat(){
	Tree[loc].lchild=Tree[loc].rchild=NULL;
	return &Tree[loc++];
}

void postOrder(Node* T){
	if(T->lchild){
		postOrder(T->lchild);
	}
	if(T->rchild){
		postOrder(T->rchild);
	}
	printf("%d ",T->c);
}

void preOrder(Node* T){
	printf("%d ",T->c);
	if(T->lchild){
		preOrder(T->lchild);
	}
	if(T->rchild){
		preOrder(T->rchild);
	}
}

void inOrder(Node* T){
	if(T->lchild){
		inOrder(T->lchild);
	}
	printf("%d ",T->c);
	if(T->rchild){
		inOrder(T->rchild);
	}
}

Node* insert(Node *T,int x){
	if(T==NULL){  
		T=creat();
		T->c=x;
		return T; 
	}else if(x<T->c){
		T->lchild=insert(T->lchild,x);
	}else if(x>T->c){
		T->rchild=insert(T->rchild,x);
	}	
	return T;
}
 
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		loc=0;
		Node* T=NULL;
		for(int i=0;i<n;i++){
			int x;
			scanf("%d",&x);
			T=insert(T,x);
		}
		preOrder(T);
		printf("\n");
		inOrder(T);
		printf("\n");
		postOrder(T);
		printf("\n");
	}	
	return 0;
}
