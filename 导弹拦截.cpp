#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
int a[maxn],dp[maxn];
int main()
{
	int i=1;
	while(scanf("%d",&a[i])!=EOF){//不知道输入多少数据时的做法 （End Of File) 
		i++;//负荷条件的执行语句 
	}i--;//退出后减去多余的一个1 
	
	int n=i;//n从1开始 
	
	//最长不上升子序列
	int ans=-1;//记录最大的dp[i]
	for(int i=1;i<=n;i++){
		dp[i]=1;//边界初试条件（假设每个元素自称一个子序列）
		for(int j=1;j<i;j++){
			if(a[i]<=a[j]&&(dp[j]+1>dp[i])){
				dp[i]=dp[j]+1;//状态转移方程，用以更新dp 
			}
		}
		ans=max(ans,dp[i]);//最大的长度 
	} 
	//Dilworth定理：偏序集的最少反链划分数等于最长链的长度
	int ans2=-1;//(也就是求最长上升子序)
	for(int i=1;i<=n;i++){//同上，因为它是以i结尾的最长上升子序列，所以这里要从前往后，不然会出现一些奇妙的bug
		dp[i]=1;//以第i个数结尾的最长上升子序列的长度至少为1（当这个序列只有它本身这一个数） 
		for(int j=1;j<i;j++){
			if(a[j]<a[i]&&(dp[j]+1>dp[i])){//如果a[j]>=a[i]的话就不满足上升这个要求（毕竟a[j]在a[i]前面） 
				dp[i]=dp[j]+1;//更新f[i]~记得要+1啊 
			}
		}
		ans2=max(ans2,dp[i]);//更新ans2 
	}
	cout<<ans<<endl<<ans2;


	return 0;
 } 
