#include<bits/stdc++.h>
using namespace std;
int main()
{
	//小鱼的游泳时间
	int a,b,c,d,x,y;
	cin>>a>>b>>c>>d;
	if(d-b<0){
		y=60+d-b;
		c--;
		x=c-a;
	} else{
		y=d-b;
		x=c-a;
	}
	
	cout<<x<<" "<<y;
	return 0;
}
