#include<bits/stdc++.h>
using namespace std;
const int maxn=100;//草药最大种类 
const int maxv=1000;//T的上限 
int w[maxn],c[maxn],dp[maxv]; 
int main(){
	int T,M;
	cin>>T>>M;
	for(int i=1;i<=M;i++){
		cin>>w[i]>>c[i];
	}
	
	//边界
	for(int t=0;t<=T;t++){
		dp[t]=0;
	} 
	for(int i=1;i<=M;i++){
		for(int t=T;t>=w[i];t--){
			dp[t]=max(dp[t],dp[t-w[i]]+c[i]);
			
		}
	}                    
	int max=0;
	for(int t=0;t<=T;t++){
		if(dp[t]>max){
			max=dp[t];
		}
	}
	cout<<max<<endl;
	return 0;

} 
