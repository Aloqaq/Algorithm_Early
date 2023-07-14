#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k=0;
	cin>>n>>m;
	double score[101][21];
	double sum=0,ave[101];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>score[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		sort(score[i],score[i]+m);
		for(int j=1;j<m-1;j++){
			sum+=score[i][j];
		}
		ave[i]=sum/(m-2);
		sum=0;
	}
	sort(ave,ave+n);
	cout<<fixed<<setprecision(2)<<ave[n-1];
	return 0;
}
