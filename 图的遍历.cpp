#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
const int INF=1000000000;
vector<int>Adj[maxn];//�ڽӱ�
int  n,m,s[maxn];//s��¼ÿ���������Զ���� 
bool vis[maxn]={false};//��ʼ���ÿ������δ���� 

void DFS(int u,int d){//uΪ��ǰ���ʽ��
	if(s[u])	return;//���ʹ� (s[u]��Ϊ0��ʾ�Ѿ�����¼���󶥵���Ч�� 
	s[u]=d;//û�з��ʹ���¼��ǰ��󶥵�Ϊ�ܷ��ʵ���Զ�� 
	for(int i=0;i<Adj[u].size();i++){//�Դ�u�������Ե�������ж���v
		int v=Adj[u][i];
		DFS(v,d);//����v 
	}	
}

int main()
{
	//100000�����㣬ʹ��dfs���ڽӱ� ,��Ϊ��Ȩͼ
	//�ӽϴ�ĵ㿪ʼ����ͼ 
	cin>>n>>m;
	int u,v;
	for(int i=1;i<=m;i++){//����ÿ���ߵ���Ϣ
	 	cin>>u>>v;
	 	Adj[v].push_back(u);//����ͼ���򽨱� 
	} 
	for(int i=n;i>0;i--){
		DFS(i,i);//����󶥵㿪ʼ����	
	}
	for(int i=1;i<=n;i++){
		cout<<s[i]<<" ";
	}
	
	return 0;
}
