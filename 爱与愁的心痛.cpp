#include<bits/stdc++.h>
using namespace std;

const int maxn=3344;
int n,m,a[maxn],minx,sum;
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(i<=m-1){
			sum+=a[i];//�յ�m���� 
			minx=sum;
		} 
		else {
			sum=sum+a[i]-a[i-m];//����sum 
			minx=min(sum,minx);
		}
	}
	cout<<minx;
	return 0;
 } 
