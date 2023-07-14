#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int x,y,m,n,l;

int main()
{
	cin>>x>>y>>m>>n>>l;
	//int (x+m*t)%l=(y+n*t)%l;
	int t=1;
	int a=(x+m*t)%l;
	int b=(y+n*t)%l;
	
	while(a!=b){
		t++;
	}
	cout<<t;
	return 0;
 } 

