#include<bits/stdc++.h>
using namespace std;
#define CLK_TCK 100;

int c1,c2,c;//��ʼ������ 
double h,m,s;//ʱ���,ʱ���� 


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
