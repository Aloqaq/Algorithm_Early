#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
int n,f[33],a[maxn],b[8];//ÿ�������Ƿ��н� 
int main()
{
	cin>>n;
	int x,t,p;
	for(int i=1;i<=7;i++){
		cin>>x;
		f[x]=1;//��Ӧ�ĺ�����Ϊ1 
	} 
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++){//ͳ��ÿ��Ʊ����� 
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
