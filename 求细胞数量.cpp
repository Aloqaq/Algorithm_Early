#include<bits/stdc++.h>
using namespace std;
const int maxn=105;

int m,n,sum=0;
char ch[maxn][maxn];
bool vis[maxn][maxn]={false};

bool judge(char c[maxn][maxn],int i,int j){
	if((c[i-1][j]>='1'&&c[i-1][j]<='9')||(ch[i][j-1]>='1'&&ch[i][j-1]<='9')||(ch[i][j+1]>='1'&&ch[i][j+1]<='9')||(ch[i+1][j]>='1'&&ch[i+1][j]<='9')){
		return true; 
	}
	return false;
}
int main()
{
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>ch[i];
	}
	for(int i=0;i<m;i++){//每一行 
		for(int j=0;j<n;j++){//每一列 
			if(ch[i][j]>='1'&&ch[i][j]<='9'&&ch[i][j]==false){
				bool flag=judge(ch,i,j);
				if(flag==true)	sum++;
				vis[i][j]=true;
				vis[i-1][j]==true;
				vis[i+1][j]==true;
				vis[i][j-1]==true;
				vis[i][j+1]==true;
			}else{
				vis[i][j]=true;
				continue;
			}
		}
	} 
	cout<<sum;
	return 0;
 } 
