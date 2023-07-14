#include<bits/stdc++.h>
using namespace std;

double dis(double x1,double y1,double x2,double y2){
	double d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return d;
} 
int main()
{
	double x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double a=dis(x1,y1,x2,y2);
	double b=dis(x2,y2,x3,y3);
	double c=dis(x3,y3,x1,y1);
	
	double C=a+b+c;
	cout<<fixed<<setprecision(2)<<C<<endl;
}
