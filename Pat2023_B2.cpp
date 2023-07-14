#include<bits/stdc++.h>
using namespace std;

const int maxn=110;
char ch[maxn][maxn];//原始字符串数组 

int n,m;
int h,w,R,D;

int x,y;//左上角坐标 

int main()
{
	cin>>n>>m;
	getchar();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>ch[i][j];
		}
		getchar();
	}
	cin>>h>>w>>R>>D;
		
	
	
	for(int i=D;i<D+h;i++){
		for(int j=R;j<R+w;j++){	
			if(i<n&&j<m)	cout<<ch[i][j];
			else 	cout<<"*";	
			
		}
		cout<<endl;
	}
	

	 
	
	return 0;
 } 
