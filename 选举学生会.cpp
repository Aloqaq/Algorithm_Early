#include<bits/stdc++.h>
using namespace std;
const int maxn=2000010;
int n,m,k[maxn];
int main(){
	
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>k[i];
	}
	sort(k,k+m);
	for(int i=0;i<m;i++){
		cout<<k[i]<<" ";
	}
	return 0;
} 
