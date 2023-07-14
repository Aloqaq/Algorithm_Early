#include<bits/stdc++.h>
using namespace std;
const int MAXV=100010;//��󶥵��� 

vector<int>Adj[MAXV];//��Ȩͼ����int 
int n,m,a,b;//nΪ������
bool vis[MAXV]={false};//��������Ѿ������ʣ���Ϊtrue
bool inq[MAXV]={false};//BFS


bool cmp(int a,int b){
	return a<b;
}
void BFS(int u){
	queue<int>q;//�������q
	q.push(u);
	inq[u]=true;
	cout<<u<<" ";
	while(!q.empty()){
		int u=q.front();//ȡ������Ԫ�� 
		q.pop();//����Ԫ�س���
		for(int i=0;i<Adj[u].size();i++){
			int v=Adj[u][i];
			if(inq[v]==false){
				q.push(v);
				inq[v]=true;
				cout<<v<<" ";
			}
		} 
	} 
}
void DFS(int u,int depth){
	vis[u]=true;
	//�Ӳ��� 
	cout<<u<<" "; 
	for(int i=0;i<Adj[u].size();i++){
		int v=Adj[u][i];
		if(vis[v]==false){
			DFS(v,depth+1);
		}
	}
} 



int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		Adj[a].push_back(b);//����������Ȩͼ 
	}
	for(int i=1;i<=n;i++){//��������ķ���˳������ 
		sort(Adj[i].begin(),Adj[i].end(),cmp);
	}
	
	DFS(1,0);//������� 
	cout<<endl;
	BFS(1);
	return 0;
 } 
