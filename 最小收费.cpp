#include<bits/stdc++.h>
using namespace std;
const int MAXV=2010;
const double INF=1000000000;
struct Node{
	int v;
	double dis;
	Node(int _v,double _dis):v(_v),dis(_dis) {	}//构造函数 
};
vector<Node>Adj[MAXV];
int n,m;
double d[MAXV];
int pre[MAXV];
bool vis[MAXV]={false};
double z;
int x,y,s,e;
double cost;
void Dijkstra(int s){//s为起点
	fill(d,d+MAXV,INF); 
	for(int i=1;i<=n;i++)	pre[i]=i;
	d[s]=0;
	for(int i=1;i<=n;i++){
		int u=-1;
		double MIN=INF;
		for(int j=1;j<=n;j++){
			if(vis[j]==false&&d[j]<MIN){
				u=j;
				MIN=d[j];
				cost=(double)(100/(1-0.01*MIN));
			}
		}
		//找不到小于INF的的[u]
		if(u==-1)	return;
		vis[u]=true;
		for(int j=1;j<=Adj[u].size();j++){
			int v=Adj[u][j].v;
			if(vis[v]==false&&d[u]+Adj[u][j].dis<d[v]){
				d[v]=d[u]+Adj[u][j].dis;
				cost=(double)(100/(1-0.01*d[v])); 
			}
		}
	}
} 

void DFS(int s,int v){
	if(v==s){
		cout<<s<<endl;
		return ;
	}
	DFS(s,pre[v]);
	cout<<v<<endl;
}
int main()
{
	cin>>n>>m;
	
	for(int i=1;i<=m;i++){//构造无向图 
		cin>>x>>y>>z;
		Adj[x].push_back(Node(y,z));
		Adj[y].push_back(Node(x,z));
	}
	//起点和终点 
	cin>>s>>e;
	Dijkstra(s);                                 
	cout<<fixed<<setprecision(8)<<cost<<endl;
	return 0;
 } 
