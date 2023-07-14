#include<bits/stdc++.h> 
using namespace std;


bool isPrime(int x){
	if(x<=1)	return false;
	int sqr=(int)sqrt(1.0*x);
	for(int i=2;i<=sqr;i++){
		if(x%i==0)	return false;
	}
	return true;
}
int main()
{
	//ÖÊÊýÉ¸
	const int maxn=110;
	int n,a[maxn];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		bool flag=isPrime(a[i]);
		if(flag==true){
			cout<<a[i]<<" ";
		}
	}
	
	return 0;
}
