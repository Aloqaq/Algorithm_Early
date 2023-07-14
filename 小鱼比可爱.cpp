#include<bits/stdc++.h>
using namespace std;

//小鱼比可爱
const int maxn=101;
int n, a[maxn],sum[maxn]; 
 
int main(){
	
	cin>>n;
	memset(sum,0,sizeof(sum));//将可爱数组归零 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(a[j]<a[i])
				sum[i]++;
		}
		cout<<sum[i]<<" "; 
	}
	
	return 0;
}
