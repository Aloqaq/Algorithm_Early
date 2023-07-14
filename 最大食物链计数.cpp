#include<bits/stdc++.h>
using namespace std;
const int maxn=5010;//�����������
const int INF=1000000000;
int n,m;
vector<int>Adj[maxn]; 
bool vis[maxn]={false};
int length=0,lenmax=0;
int DFS(int u,int depth){
	vis[u]=true;
	if(depth>length)	length=depth;
	for(int i=0;i<Adj[u].size();i++){
		int v=Adj[u][v];
		if(Adj[u][v]==false){
			DFS(v,depth+1);
		}
	}
	return length;
}

void DFSTraver(){
	for(int u=0;u<n;u++){
		if(vis[u]==false){
			int len=DFS(u,1);
			if(length>lenmax)	lenmax=length;
		}
	}
	cout<<lenmax;
}
int main()
{
	cin>>n>>m;//���붥��ͱ�
	int A,B;
	for(int i=1;i<=n;i++){
		cin>>A>>B;
		Adj[A].push_back(B);//����� 
	} 
	DFSTraver();//��ȱ���ͼ 
	
	return 0;//��dfs���ڽӱ� 
}
