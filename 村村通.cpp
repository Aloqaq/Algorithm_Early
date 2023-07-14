#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
int father[maxn];


int findFather(int x){
	int a=x;
	while(x!=father[x]){
		x=father[x];
	}
	while(a!=father[a]){
		int z=a;
		a=father[a];
		father[z]=x;
	}
	return x;
} 
void Union(int a,int b){
	int faA=findFather(a);
	int faB=findFather(b);
	if(faA!=faB){
		father[faA]=faB;
	}
}
int main()
{
	int n,m,a,b,ans;
	
	while(true){
		//城镇数和道路数
		ans=0;
		cin>>n>>m;
		if(n==0)	return 0;
		//初始化 
		for(int i=1;i<=n;i++){
			father[i]=i;
		}
		for(int i=1;i<=m;i++){
			cin>>a>>b;
			Union(a,b);
		} 
		for(int i=1;i<=n;i++){
			if(father[i]==i){
				ans++;//需修建的道路数量加1 
			}	
		}
		cout<<ans-1<<endl; 	
	}
	return 0;
 } 
