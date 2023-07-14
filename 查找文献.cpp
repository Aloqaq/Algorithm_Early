#include<bits/stdc++.h>
using namespace std;
const int MAXV=100010;//最大顶点数 

vector<int>Adj[MAXV];//无权图，用int 
int n,m,a,b;//n为顶点数
bool vis[MAXV]={false};//如果顶点已经被访问，则为true
bool inq[MAXV]={false};//BFS


bool cmp(int a,int b){
	return a<b;
}
void BFS(int u){
	queue<int>q;//定义队列q
	q.push(u);
	inq[u]=true;
	cout<<u<<" ";
	while(!q.empty()){
		int u=q.front();//取出队首元素 
		q.pop();//队首元素出队
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
	//加操作 
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
		Adj[a].push_back(b);//创建无无向权图 
	}
	for(int i=1;i<=n;i++){//按各顶点的访问顺序排序 
		sort(Adj[i].begin(),Adj[i].end(),cmp);
	}
	
	DFS(1,0);//深度优先 
	cout<<endl;
	BFS(1);
	return 0;
 } 
