#include<bits/stdc++.h>
using namespace std;
const int MAXV=5010;//最大顶点数
const int INF=1000000000;//设INF是一个很大的数
int n,m,G[MAXV][MAXV];//n为顶点数，m为边数，MAXV为最大顶点数
int d[MAXV];//顶点与集合的最短距离
bool vis[MAXV]={false};//标记数组，为true时表示已经被访问，初值均为false


int prim()//默认0号为初始点，函数返回值为最小生成树的边权之和
{
	fill(d,d+MAXV,INF);//fill函数将整个数组赋值为INF
	d[0]=0;//只有0号顶点到集合s的距离为0，其余全为INF
	int ans=0;//存放边权
	for(int i=0;i<n;i++)//循环n次
	{
		int u=-1,MIN=INF;
		//u使得d[u]最小，MIN存放该最小的d[u]
		for(int j=0;j<n;j++)//找到未访问的顶点中d[]最小的
		{
			if(vis[j]==false&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}

		//找不到小于INF的d[u],则剩下的顶点和集合s不连通
		if(u==-1){
			return -1;
		}	
		vis[u]=true;//标记u为已访问
		ans+=d[u];
		
		for(int v=0;v<n;v++)
		{
			//v未访问&&u能到达v&&以u为中介点可以使v离集合s更近
			if(vis[v]==false&&G[u][v]!=INF&&G[u][v]<d[v])
			{
				d[v]=G[u][v];//将G[u][v]赋值给d[v]
			}
		}
	}
	
	return ans;

}



int main()
{
	int u,v,w;
	scanf("%d%d",&n,&m);//顶点个数、边数
	fill(G[0],G[0]+MAXV*MAXV,INF);//初始化图
	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d",&u,&v,&w);
		G[u][v]=G[v][u]=w;//无向图
	}
	int ans=prim();//prim算法的入口
	printf("%d\n",ans);
	return 0;
}
