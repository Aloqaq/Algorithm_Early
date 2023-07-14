#include<bits/stdc++.h>
using namespace std;

int num;
int x;

int main()
{
	set<int>s;
	
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>num;
		s.insert(num);
	}
	
	int len=s.size();
	
	cout<<len<<endl;
	for(set<int>::iterator it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	return 0;
}
