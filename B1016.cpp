#include<bits/stdc++.h>
using namespace std;
int a,da,b,db;

int deal(int x,int y){
	int count=0;
	while(x>0){
		int temp=x%10;
		if(temp==y){
			count++;
		}
		x/=10;
	}
	int ret=0;
	for(int i=0;i<count;i++)
	{
		ret*=10;
		ret+=y;
	}
	return ret;
}
int  main()
{
	
	cin>>a>>da>>b>>db;
	int n1=deal(a,da);
	int n2=deal(b,db);
	cout<<n1+n2; 
	return 0;
} 
