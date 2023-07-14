#include<bits/stdc++.h>
using namespace std;
const int maxn=31;
struct BiTree{
	int data;//数据域 
	BiTree* lchild;
	BiTree* rchild;//左右子树的指针 
};
int N;//结点个数
int pre[maxn],in[maxn],post[maxn]; 


BiTree* reCreate(int postL,int postR,int inL,int inR){
	if(postL>postR)	return NULL;//不存在
	
	BiTree* root=new BiTree;//新建根节点 
	root->data=post[postR];
	int k;
	for(k=inL;k<=inR;k++){
		if(in[k]==post[postR])
			break;//找到根节点 
	} 
	int numLeft=k-inL;//左子树结点个数 
	
	//重构左子树 
	root->lchild=reCreate(postL,postL+numLeft-1,inL,k-1);
	root->rchild=reCreate(postL+numLeft,postR-1,k+1,inR);
	
	return root;
} 

int num=0;//已输出的结点个数
void BFS(BiTree* root){//层序遍历算法 
	queue<BiTree*>q;
	q.push(root);
	while(!q.empty()){
		BiTree *now=q.front();
		q.pop();
		printf("%d",now->data);
		num++;
		
		if(num<N)	printf(" ");
		if(now->lchild!=NULL)	q.push(now->lchild);
		if(now->rchild!=NULL)	q.push(now->rchild);
	}
} 
int main(){
	
	
	cin>>N;
	//输入数组 
	for(int i=0;i<N;i++){
		cin>>post[i];
	} 
	for(int i=0;i<N;i++){
		cin>>in[i];
	} 
	BiTree* root=reCreate(0,N-1,0,N-1);//建树
	BFS(root);//层序遍历
	return 0; 
	

}
