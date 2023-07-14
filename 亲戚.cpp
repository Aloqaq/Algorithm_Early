#include<bits/stdc++.h>
using namespace std;
const int maxn=5010;
int father[maxn];
bool isRoot[maxn]={false};
bool mem[maxn];
int findFather(int x){
	//����x�������while���ɸ��ڵ㣬����ȱ���x
	int a=x;
	while(x!=father[x]){//��Ѱ���ڵ�
		x=father[x]; 
	} 
	//������x��ŵ��Ǹ��ڵ㣬��ʼ·��ѹ�� 
	while(a!=father[a]){
		int z=a;
		a=father[a];
		father[z]=x;
	} 
	return x;//���ظ��ڵ� 
}

void Union(int a,int b){//�ϲ����� 
	int faA=findFather(a);
	int faB=findFather(b);
	if(faA!=faB){
		father[faA]=faB;//�ϲ����� 
	}
} 
void init(int n){//��ʼ��father[i]Ϊi,��flag[i] Ϊfalse
	for(int i=1;i<=n;i++){
		father[i]=i;
		isRoot[i]=false;//���Ǹ� 
	} 	
}
int main()
{
	int n,m,p,a,b,x,y;
	cin>>n>>m>>p;//n�����ѣ�m�Թ�ϵ����ѯp�� 
	init(n);//��ʼ�� 
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		Union(a,b);//�ϲ��������� 
	}
	for(int i=1;i<=p;i++){//��ѯ 
		cin>>x>>y;
		if(findFather(x)==findFather(y))
			mem[i]=true;
		else 
			mem[i]=false;
	} 
	for(int i=1;i<=p;i++){//��� 
		
		if(mem[i]==true)
			cout<<"Yes"<<endl;
		else if(mem[i]==false) 
			cout<<"No"<<endl;
	} 
	
	return 0;
}
