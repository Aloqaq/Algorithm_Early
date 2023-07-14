#include<bits/stdc++.h>
using namespace std;
const int maxn=31;
struct BiTree{
	int data;//������ 
	BiTree* lchild;
	BiTree* rchild;//����������ָ�� 
};
int N;//������
int pre[maxn],in[maxn],post[maxn]; 


BiTree* reCreate(int postL,int postR,int inL,int inR){
	if(postL>postR)	return NULL;//������
	
	BiTree* root=new BiTree;//�½����ڵ� 
	root->data=post[postR];
	int k;
	for(k=inL;k<=inR;k++){
		if(in[k]==post[postR])
			break;//�ҵ����ڵ� 
	} 
	int numLeft=k-inL;//������������ 
	
	//�ع������� 
	root->lchild=reCreate(postL,postL+numLeft-1,inL,k-1);
	root->rchild=reCreate(postL+numLeft,postR-1,k+1,inR);
	
	return root;
} 

int num=0;//������Ľ�����
void BFS(BiTree* root){//��������㷨 
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
	//�������� 
	for(int i=0;i<N;i++){
		cin>>post[i];
	} 
	for(int i=0;i<N;i++){
		cin>>in[i];
	} 
	BiTree* root=reCreate(0,N-1,0,N-1);//����
	BFS(root);//�������
	return 0; 
	

}
