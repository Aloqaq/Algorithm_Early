#include<bits/stdc++.h>
using namespace std;
//有一个 n \times mn×m 方格的棋盘
//求其方格包含多少正方形、长方形（不包含正方形）。 
int main()
{
	long long n,m,a=0,b=0,sum=0;//棋盘的长宽，正方形、长方形数量 ,矩形的数量 
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			a+=min(i,j);
			sum+=i*j;
		}
	}
	b=sum-a;//长方形的数量=矩形-正方形 
	cout<<a<<" "<<b;
	return 0;
}
