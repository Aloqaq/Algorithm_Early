#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL maxn=100010;
LL n,a[maxn];
int main()
{
	cin>>n;
	int i=0,k=n;
	while(n>1){
		if(n%2==0){//Å¼Êý
			n=n/2; 
		}else{
			n=3*n+1;
		}	
		a[i++]=n;
	}
	for(int j=i-1;j>=0;j--){
		cout<<a[j]<<" ";
	}
	cout<<k;
	return 0;
	
}
