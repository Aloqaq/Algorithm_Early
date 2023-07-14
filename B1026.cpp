#include<bits/stdc++.h>
using namespace std;
#define CLK_TCK 100;

int c1,c2,c;//初始，结束 
double h,m,s;//时间差,时分秒 


int main()
{
	cin>>c1>>c2;
	c=c2-c1;
	//cout<<c<<endl;
	
	double temp=(double)c/(double)CLK_TCK;
	//cout<<temp<<endl;
	c=round(temp);
	//cout<<c<<endl;
	h=c/3600;
	c=c%3600;
	m=c/60;
	s=c%60;
	
	cout<<round(h)<<":"<<round(m)<<":"<<round(s)<<endl; 
	return 0;
}
