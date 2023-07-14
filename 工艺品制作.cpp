#include<bits/stdc++.h>
using namespace std;
int main()
{
	//工艺品制作
	int w,x,h,q; 
	int x1[101],y1[101],z1[101],x2[101],y2[101],z2[101];
	cin>>w>>x>>h;
	const int maxn=30;
	int s[maxn][maxn][maxn];//初始化为0 
	memset(s,0,sizeof(s));
	cin>>q; 
	for(int i=1;i<=q;i++){
		cin>>x1[i]>>y1[i]>>z1[i]>>x2[i]>>y2[i]>>z2[i];
	}
	
	for(int i=1;i<=q;i++){//遍历每一条记录
		for(int j=x1[i];j<=x2[i];j++){
			for(int m=y1[i];m<=y2[i];m++){
				for(int n=z1[i];n<=z2[i];n++){
						s[j][m][n]=1;
				}
			}
		}
	} 
		
	
	int count=0;
	for(int o=1;o<=w;o++){
		for(int m=1;m<=x;m++){
			for(int n=1;n<=h;n++){
				if(s[o][m][n]==0){
					count++;
				}
			}
		}
	} 
	cout<<count;
	
	return 0;
}
