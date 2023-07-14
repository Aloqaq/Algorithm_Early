#include<bits/stdc++.h>
using namespace std;
const int maxn=10010;
int u[105],v[105];//区域的起始点
int vis[maxn];//是否被访问过 
int main()
{
	int l,m;//马路长度和区域数目
	cin>>l>>m;
	int count=0;
	for(int i=0;i<=l;i++){
		vis[i]=0;//访问所有树木，标记未访问 
	}
	for(int i=0;i<m;i++){//区域 
		cin>>u[i]>>v[i]; 
		for(int j=u[i];j<=v[i];j++){
			vis[j]=1;//修改访问位 
		} 
	} 
	for(int i=0;i<=l;i++){
		
		if(vis[i]==0){
			count++;
		}
	} 
	
	cout<<count;
	return 0;
}

