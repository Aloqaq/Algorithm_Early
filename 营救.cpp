#include<bits/stdc++.h>
using namespace std;
const int INF=1000000000;
const int MAXV=10010;
int n,m,s,t;

struct Node{
	int v,dis;

};
vector<Node>Adj[MAXV];
int d[MAXV];
bool vis[MAXV]={false};

void Dijkstra(int s){
	fill(d,d+MAXV,INF);
	d[s]=0;
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++){
			if(vis[j]==false&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1)	return ;
		vis[u]=true;
		for(int j=0;j<Adj[u].size();j++){
			int v=Adj[u][j].v;
			if(vis[v]==false&&d[u]+Adj[u][j].dis<d[v]){
				d[v]=d[u]+Adj[u][j].dis;
			}
		}
	}
}

int main()
{
	int u,v,w;
	cin>>n>>m>>s>>t;	
	for(int i=0;i<m;i++){
			cin>>u>>v>>w;
			Node temp;
			temp.v =v;
			temp.dis =w;
			Adj[u].push_back(temp);
			
	}
	Dijkstra(s);
	for(int i=0;i<n;i++){
		if(i==t-1)	cout<<d[i];
	}
	return 0;
 } 
