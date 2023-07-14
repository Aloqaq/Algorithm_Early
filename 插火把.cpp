#include<bits/stdc++.h>
using namespace std;
const int maxn=101;
int a[maxn][maxn];

void Light(int x,int y){//火把照亮 
	a[x][y]=1;
	a[x][y+1]=1;
	a[x][y+2]=1;
	a[x][y-1]=1;
	a[x][y-2]=1;
	a[x-1][y-1]=1;
	a[x+1][y-1]=1;
	a[x-1][y+1]=1;
	a[x+1][y+1]=1;
	a[x-1][y]=1;
	a[x-2][y]=1;
	a[x+1][y]=1;
	a[x+2][y]=1;
} 
void Store(int x,int y){
	for(int i=x-2;i<=x+2;i++){
		for(int j=y-2;j<=y+2;j++){
			a[i][j]=1;
		}
	}
}
int main()
{
	//插火把 
	int n,m,k,x,y,o,p,sum=0;
	cin>>n>>m>>k;
	memset(a,0,sizeof(a));
	for(int i=1;i<=m;i++){
		cin>>x>>y;//火把位置 
		Light(x,y);//照亮区域 
	} 
	
	for(int i=1;i<=k;i++){
		cin>>o>>p;
		Store(o,p);
	} 
	
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==0)	sum++;
		}
	}
	cout<<sum;
	return 0;
 } 
