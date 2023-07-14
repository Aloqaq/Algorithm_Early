#include<bits/stdc++.h>
using namespace std;

const int maxn=20010;//桶排序
int t[maxn],z[maxn]={0};//桶中的数，和是否在桶内 
int n,a[105],maxl,ans=0;
int main()
{
	//珠心算测验

	cin>>n; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		z[a[i]]=1;//标记在桶内 
	}
	
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
		
			t[a[i]+a[j]]++;//桶内对应位置的数字加1（即有两个数相加等于桶的该位置 
			maxl=max(maxl,a[i]+a[j]) ;//求出最大的数 
			
		} 
	}
	for(int i=1;i<=maxl;i++){
		if(z[i]==1&&t[i]>0)	ans++;
	} 
	
	cout<<ans;
	return 0;
 } 
