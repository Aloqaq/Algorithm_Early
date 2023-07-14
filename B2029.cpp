#include<iostream>
using namespace std;

const double PI=3.1415;
int need=20;//要喝的水
int perCap;//每桶水的量 
int h,r; 
int num;

int main()
{
	cin>>h>>r;
	
	perCap=PI*r*r*h/1000;
	
	num=need/perCap;
	
	if(num*perCap<=need){
		cout<<num+1;
	}else
		cout<<num;
	
	
	return 0;
 } 
