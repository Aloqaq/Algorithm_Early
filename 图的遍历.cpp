#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
const int INF=1000000000;
vector<int>Adj[maxn];//邻接表
int  n,m,s[maxn];//s记录每个顶点的最远距离 
bool vis[maxn]={false};//初始标记每个顶点未访问 

void DFS(int u,int d){//u为当前访问结点
	if(s[u])	return;//访问过 (s[u]不为0表示已经被记录，大顶点生效） 
	s[u]=d;//没有访问过记录当前最大顶点为能访问的最远点 
	for(int i=0;i<Adj[u].size();i++){//对从u除法可以到达的所有顶点v
		int v=Adj[u][i];
		DFS(v,d);//访问v 
	}	
}

int main()
{
	//100000个顶点，使用dfs的邻接表 ,且为无权图
	//从较大的点开始反向建图 
	cin>>n>>m;
	int u,v;
	for(int i=1;i<=m;i++){//输入每条边的信息
	 	cin>>u>>v;
	 	Adj[v].push_back(u);//有向图反向建边 
	} 
	for(int i=n;i>0;i--){
		DFS(i,i);//从最大顶点开始访问	
	}
	for(int i=1;i<=n;i++){
		cout<<s[i]<<" ";
	}
	
	return 0;
}
