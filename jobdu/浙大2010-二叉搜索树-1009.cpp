#include <cstdio>
#include <cstring>
using namespace std;
struct Node{
	Node *lchild;
	Node *rchild;
	int c;
}Tree[110];
int loc;
Node* creat(){
	Tree[loc].lchild=Tree[loc].rchild=NULL;
	return &Tree[loc++];
}
int size1,size2;
int *size;
char str1[25],str2[25];
char *str;

void postOrder(Node *T){
	if(T->lchild){
		postOrder(T->lchild);
	}
	if(T->rchild){
		postOrder(T->rchild);
	}
	str[(*size)++]=T->c+'0';//

}

void inOrder(Node *T){
	if(T->lchild){
		inOrder(T->lchild);
	}
	str[(*size)++]=T->c+'0';//
	if(T->rchild){
		inOrder(T->rchild);
	}
}

Node* insert(Node *T,int x){
	if(T==NULL){
		T=creat();
		T->c=x;
		return T;
	}
	if(x<(T->c)){
		T->lchild=insert(T->lchild,x);
	}else if(x>(T->c)){
		T->rchild=insert(T->rchild,x);
	}
	return T;
}


int main(){
	int n;
	while(scanf("%d",&n)!=EOF&&n!=0){
		loc=0;
		Node *T=NULL;
		char temp[12];
		scanf("%s",temp);

		for(int i=0;temp[i]!=0;i++){
			T=insert(T,temp[i]-'0');
		}
		size1=0;
		str=str1;
		size=&size1;
		postOrder(T);
		inOrder(T);
		str[size1]=0;
		//printf("%s\n",str1);
		while(n--){
			Node *P=NULL;
			char tempp[12];
			scanf("%s",tempp);
			for(int i=0;tempp[i]!=0;i++){
				P=insert(P,tempp[i]-48);
			}

			size2=0;
			size=&size2;
			str=str2;
			postOrder(P);
			inOrder(P);
            str[size2]=0;
            //printf("%s\n",str2);
			if(strcmp(str1,str2)==0){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}

	}
	return 0;
}

