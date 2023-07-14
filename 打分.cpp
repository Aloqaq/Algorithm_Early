#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int a[1010];
	double sum,ave;
	cin>>n; 
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	sort(a,a+n);

	for(int i=1;i<n-1;i++){
		sum+=a[i];
	}
	ave=sum/(n-2)*1.0;
	cout<<fixed<<setprecision(2)<<ave;
	return 0;
 } 
