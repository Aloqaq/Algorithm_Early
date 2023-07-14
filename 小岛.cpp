#include<bits/stdc++.h>
using namespace std;
const int maxn=101;
const int INF=1000000000;
int d[maxn];
bool vis[maxn]={false};
int n,m,a,s,t,u,v,e,G[maxn][maxn];

void Dijkstra(int s){
	fill(d,d+maxn,INF);
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
		for(int v=0;v<n;v++){
			if(vis[v]==false&&G[u][v]!=INF&&d[u]+G[u][v]<d[v]){
				d[v]=d[u]+G[u][v];
			}
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++){//m个操作 
		cin>>a;
		if(a==0){//询问 
			cin>>s>>t;
			Dijkstra(s);
			if(d[t]==INF)	cout<<-1<<endl;
			else	cout<<d[t]<<endl;
			continue;
		} else//新增 
			cin>>u>>v>>e;
			G[u][v]=G[v][u]=e;
			continue;
	}

	return 0;
}
