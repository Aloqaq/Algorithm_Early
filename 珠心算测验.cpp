#include<bits/stdc++.h>
using namespace std;

const int maxn=20010;//Ͱ����
int t[maxn],z[maxn]={0};//Ͱ�е��������Ƿ���Ͱ�� 
int n,a[105],maxl,ans=0;
int main()
{
	//���������

	cin>>n; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		z[a[i]]=1;//�����Ͱ�� 
	}
	
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
		
			t[a[i]+a[j]]++;//Ͱ�ڶ�Ӧλ�õ����ּ�1��������������ӵ���Ͱ�ĸ�λ�� 
			maxl=max(maxl,a[i]+a[j]) ;//��������� 
			
		} 
	}
	for(int i=1;i<=maxl;i++){
		if(z[i]==1&&t[i]>0)	ans++;
	} 
	
	cout<<ans;
	return 0;
 } 
