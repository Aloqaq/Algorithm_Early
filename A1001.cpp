#include<bits/stdc++.h>
using namespace std;
//A1001

int a,b,sum;
char c[10];
int main()
{
	cin>>a>>b;
	if(a+b<0)	sum=abs(a+b);
	else	sum=a+b;
	int i=1;
	for(i=1;sum>9;i++)
	{
		c[i]=sum%10+'0';//从末尾开始保存
		sum=sum/10; 	
	}
	
	c[i]=sum;
	
	if(a+b<0)	cout<<"-"<<sum;
	for(int j=i-1;j>=0;j--)
	{
		if(j%3==0&&j!=0)	cout<<",";
		cout<<c[j];
		if(j==0)	cout<<endl;
	}
	return 0;
} 
