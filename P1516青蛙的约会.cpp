#include<bits/stdc++.h>
using namespace std;
long long x,y,m,n,L;

int main()
{
	cin>>x>>y>>m>>n>>L;
	int x0=x,y0=y;
	int i=0;
	for(i=0;;i++)
	{
		if(x==y){//碰面
			cout<<i;
			break;
		}
		else{//不碰面
			x+=m;
			y+=n;
			if(x>=L)
				x=x%L;
			if(y>=L)
				y=y%L;//重置坐标 
			if(x==x0&&y==y0){
				cout<<"Impossible";
				break;
			}
		}
	}
	
	return 0;
}