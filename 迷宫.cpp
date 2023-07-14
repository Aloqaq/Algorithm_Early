#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
bool vis[maxn]={true};//ÓÐÈË 
int main()
{
	int p,q,a[101];
	cin>>p>>q;
	for(int i=0;i<q;i++){
		cin>>a[i];
	}
	for(int i=0;i<q;i++){
		
	}
	return 0;
 }
 
 /*
 #include<bits/stdc++.h>
using namespace std;
const int MAXV=10010;
const int INF=1000000000;
char ch[MAXV][MAXV];
int n,G[MAXV][MAXV],a,b,sum=0;
bool vis[MAXV]={false};
void DFS(int u,int depth){
	vis[u]=true;
	//²Ù×÷
	for(int v=0;v<n;v++){
		if(vis[v]==false&&G[u][v]!=INF){
			DFS(v,depth+1);
		}
	} 
}

int DFSTraver(){
	for(int u=0;u<n;u++){
		if(vis[u]==false){
			DFS(u,1);
			sum++;
		}
	}
	return sum;
}
int main()
{
	cin>>a>>b;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>ch[i][j];
			G[i][j]=ch[i][j]-'0';
		}
	}
	int s=DFSTraver();
	cout<<s;
	return 0;
 } */ 
