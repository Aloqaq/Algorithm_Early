#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
int n,f[33],a[maxn],b[8];//每个数字是否中奖 
int main()
{
	cin>>n;
	int x,t,p;
	for(int i=1;i<=7;i++){
		cin>>x;
		f[x]=1;//对应的号码置为1 
	} 
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++){//统计每张票的情况 
		for(int j=1;j<=7;j++){
			cin>>t;
			if(f[t]==1){	
				a[i]++;	
			}
		}
		p=a[i];
		b[p]++; 
	}
	for(int i=7;i>=1;i--){
		cout<<b[i]<<" ";
	}
	
	return 0;
 } 
