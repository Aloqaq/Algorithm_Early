#include<bits/stdc++.h>
using namespace std;
int n,m;
const int maxn=110;
char s[maxn][maxn];

	
int main()
{
	//扫雷游戏
	cin>>n>>m;
	for(int i=0;i<n;i++){//输入地雷信息 	
		for(int j=0;j<m;j++){
			cin>>s[i][j];
		}
	} 
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int count=0;
			if(s[i][j]=='?'){
				if(s[i-1][j-1]=='*')	count++;
				if(s[i-1][j]=='*')	    count++;
				if(s[i-1][j+1]=='*')	count++;
				if(s[i][j-1]=='*')	    count++;
				if(s[i][j+1]=='*')   	count++;
				if(s[i+1][j-1]=='*')	count++;
				if(s[i+1][j]=='*')	    count++;
				if(s[i+1][j+1]=='*')	count++;
				cout<<count;
			}
			
			if(s[i][j]=='*'){
				cout<<"*";
			}
		} 
		cout<<endl;
	}
	
	return 0;
 } 
