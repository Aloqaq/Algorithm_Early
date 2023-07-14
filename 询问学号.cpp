#include<iostream>
#include<bits/stdc++.h>
const int maxn=2000010;
const int maxm=100010;
using namespace std;
int id[maxn],q[maxm],n,m;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){//输入学号 
		cin>>id[i];
	}
	for(int j=1;j<=m;j++){
		cin>>q[j];//询问的同学 
	} 
	for(int i=1;i<=m;i++){
		cout<<id[q[i]]<<endl;
	}
	system("pause");
	return 0;
}
