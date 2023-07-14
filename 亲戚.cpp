#include<bits/stdc++.h>
using namespace std;
const int maxn=5010;
int father[maxn];
bool isRoot[maxn]={false};
bool mem[maxn];
int findFather(int x){
	//由于x在下面的while会变成根节点，因此先保存x
	int a=x;
	while(x!=father[x]){//找寻根节点
		x=father[x]; 
	} 
	//到这里x存放的是根节点，开始路径压缩 
	while(a!=father[a]){
		int z=a;
		a=father[a];
		father[z]=x;
	} 
	return x;//返回根节点 
}

void Union(int a,int b){//合并代码 
	int faA=findFather(a);
	int faB=findFather(b);
	if(faA!=faB){
		father[faA]=faB;//合并他们 
	}
} 
void init(int n){//初始化father[i]为i,且flag[i] 为false
	for(int i=1;i<=n;i++){
		father[i]=i;
		isRoot[i]=false;//不是根 
	} 	
}
int main()
{
	int n,m,p,a,b,x,y;
	cin>>n>>m>>p;//n个朋友，m对关系，查询p组 
	init(n);//初始化 
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		Union(a,b);//合并两个集合 
	}
	for(int i=1;i<=p;i++){//查询 
		cin>>x>>y;
		if(findFather(x)==findFather(y))
			mem[i]=true;
		else 
			mem[i]=false;
	} 
	for(int i=1;i<=p;i++){//输出 
		
		if(mem[i]==true)
			cout<<"Yes"<<endl;
		else if(mem[i]==false) 
			cout<<"No"<<endl;
	} 
	
	return 0;
}
