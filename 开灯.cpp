#include<bits/stdc++.h>
using namespace std;
const int maxn=2000020;
int t[maxn],L[maxn];
double a[maxn];
int main()
{
	int n;
	cin>>n;
	memset(L,0,sizeof(L));
	
	for(int i=0;i<n;i++){
		cin>>a[i]>>t[i];
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<=t[i];j++){
			int temp=a[i]*j;
			L[temp]=!L[temp];
		}
	}
	for(int i=0;i<sizeof(L);i++){
		if(L[i]==1){
			cout<<i;
			break;
		}
	}
	
	return 0;
}
