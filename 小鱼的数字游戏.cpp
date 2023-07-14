#include<bits/stdc++.h>
using namespace std;
int main()
{
	const int maxn=101;
	int a[maxn];
	int i,j;
	for(i=0;;i++){
		cin>>a[i];
		if(a[i]==0){
			break;
		}
	}
	for(j=i-1;j>=0;j--){
		cout<<a[j]<<" ";
	}
	return 0;
}
