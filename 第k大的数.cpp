#include<bits/stdc++.h> 
using namespace std;
const int maxn=5000010;
int a[maxn];

int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//sort(a,a+n);
	nth_element(a,a+k,a+n); 
	cout<<a[k];

}
