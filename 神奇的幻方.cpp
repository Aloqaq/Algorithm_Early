#include<bits/stdc++.h>
using namespace std;
const int maxn=40;

int main()
{
	//神奇的幻方
	int n;
	cin>>n;
	int s[maxn][maxn];
	memset(s,0,sizeof(s));
	int mid=n/2+1;//中间位置
	s[1][mid]=1;
	int u=1,v=mid;//记录前一个的下标 
	for(int k=2;k<=n*n;k++){
		if(u==1&&v!=n){
			s[n][v+1]=k;
			u=n;
			v=v+1;
		}else if(v==n&&u!=1){
			s[u-1][1]=k;
			u=u-1;
			v=1;
		}else if(u==1&&v==n){
			s[u+1][v]=k;
			u=u+1;
			v=v;
		}else if(u!=1&&v!=n){
			if(s[u-1][v+1]==0){//右上方未填数 
				s[u-1][v+1]=k;
				u=u-1;
				v=v+1;
			}else if(s[u-1][v+1]!=0){
				s[u+1][v]=k;
				u=u+1;
				v=v;
			}	
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
