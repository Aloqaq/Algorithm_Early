#include<bits/stdc++.h>
using namespace std;
const int maxn=10010;
int u[105],v[105];//�������ʼ��
int vis[maxn];//�Ƿ񱻷��ʹ� 
int main()
{
	int l,m;//��·���Ⱥ�������Ŀ
	cin>>l>>m;
	int count=0;
	for(int i=0;i<=l;i++){
		vis[i]=0;//����������ľ�����δ���� 
	}
	for(int i=0;i<m;i++){//���� 
		cin>>u[i]>>v[i]; 
		for(int j=u[i];j<=v[i];j++){
			vis[j]=1;//�޸ķ���λ 
		} 
	} 
	for(int i=0;i<=l;i++){
		
		if(vis[i]==0){
			count++;
		}
	} 
	
	cout<<count;
	return 0;
}

