#include<bits/stdc++.h>
using namespace std;
#define maxn 20010

bool cmp(int a,int b)
{
	return a>b;
}
int N,H[maxn];
long long B,S;//书架高度，奶牛身高和 
int main()
{
	S=0;
	cin>>N>>B;
	for(int i=0;i<N;i++)
	{
		cin>>H[i];
	}
	sort(H,H+N,cmp);
	
	int cnt=0;
	for(int i=0;S<B;i++)
	{
		S+=H[i];
		cnt++;
	}
	cout<<cnt;
	return 0;
}
