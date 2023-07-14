#include<bits/stdc++.h>
using namespace std;
//P1219
const int maxn=14;
int mp[maxn][maxn];
int n,k;
bool col[maxn],g[2*maxn],ug[2*maxn];

void DFS(int u){
	if(n==u){
		k++;
		if(k<=3){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(mp[i][j]==1){
						cout<<j+1<<" ";
					}
				}
			}cout<<endl;
		}
		return;
	}
	for(int i=0;i<n;i++){
		if(col[i]||g[i+u]||ug[n+u-i])	continue;
		
		col[i]=g[i+u]=ug[n+u-i]=true;
		mp[u][i]=1;
		DFS(u+1);
		col[i]=g[i+u]=ug[n+u-i]=false;//回溯 
		mp[u][i]=0;
	}
}

int main(){
	//cin>>n;
	n=7;
	memset(mp,0,sizeof(mp));
	DFS(0);//从p[1]开始    
	cout<<k;
	
	return 0; 
} 

