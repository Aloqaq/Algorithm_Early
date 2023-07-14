#include<bits/stdc++.h>
using namespace std;
const int maxn=9;
int a[maxn][maxn];
int main()
{
	int n,x=1,y=0;//±ß³¤
	cin>>n;
	int k=1;
	while(k<=n*n){
		while(y<n&&!a[x][y+1])	a[x][++y]=k++;
		while(x<n&&!a[x+1][y])	a[++x][y]=k++;
		while(y>1&&!a[x][y-1])	a[x][--y]=k++;
		while(x>1&&!a[x-1][y])	a[--x][y]=k++;
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%3d",a[i][j]);
		}printf("\n");
	}
	return 0;
} 
