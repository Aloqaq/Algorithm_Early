#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
int a[maxn],dp[maxn];
int main()
{
	int i=1;
	while(scanf("%d",&a[i])!=EOF){//��֪�������������ʱ������ ��End Of File) 
		i++;//����������ִ����� 
	}i--;//�˳����ȥ�����һ��1 
	
	int n=i;//n��1��ʼ 
	
	//�������������
	int ans=-1;//��¼����dp[i]
	for(int i=1;i<=n;i++){
		dp[i]=1;//�߽��������������ÿ��Ԫ���Գ�һ�������У�
		for(int j=1;j<i;j++){
			if(a[i]<=a[j]&&(dp[j]+1>dp[i])){
				dp[i]=dp[j]+1;//״̬ת�Ʒ��̣����Ը���dp 
			}
		}
		ans=max(ans,dp[i]);//���ĳ��� 
	} 
	//Dilworth����ƫ�򼯵����ٷ�����������������ĳ���
	int ans2=-1;//(Ҳ���������������)
	for(int i=1;i<=n;i++){//ͬ�ϣ���Ϊ������i��β������������У���������Ҫ��ǰ���󣬲�Ȼ�����һЩ�����bug
		dp[i]=1;//�Ե�i������β������������еĳ�������Ϊ1�����������ֻ����������һ������ 
		for(int j=1;j<i;j++){
			if(a[j]<a[i]&&(dp[j]+1>dp[i])){//���a[j]>=a[i]�Ļ��Ͳ������������Ҫ�󣨱Ͼ�a[j]��a[i]ǰ�棩 
				dp[i]=dp[j]+1;//����f[i]~�ǵ�Ҫ+1�� 
			}
		}
		ans2=max(ans2,dp[i]);//����ans2 
	}
	cout<<ans<<endl<<ans2;


	return 0;
 } 
