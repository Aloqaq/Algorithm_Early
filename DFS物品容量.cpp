#include<bits/stdc++.h>
using namespace std;
const int maxn=30;//最大物品数为30 
int n,V,ans=0,w[maxn],c[maxn];
//物品数，背包容量，当前最大价值量，物品重量，物品价值量 

void DFS(int index,int sumW,int sumC)
{
	if(index==n)	return;
	DFS(index+1,sumW,sumC);//不选index件（岔路口1） 
	if(sumW+w[index]<=V)
	{
		if(sumC+c[index]>ans)
			ans=sumC+c[index];
		DFS(index+1,sumW+w[index],sumC+c[index]);//选第index件（岔路口2） 
	 } 
 } 
int main()
{
	cin>>n>>V;
	for(int i=0;i<n;i++)
	{
		cin>>w[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	DFS(0,0,0);
	cout<<ans;
	return 0;
}
