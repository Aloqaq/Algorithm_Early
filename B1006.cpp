#include<bits/stdc++.h>
using namespace std;
int n,c[5],i,j,p=1;
int main()
{
	cin>>n;
	for(i=0;n>9;i++)
	{
		c[i]=n%10;//最低位开始保存
		n/=10; 
	}
	c[i]=n;
	for(j=i;j>=0;j--)
	{
		if(j==2)
			for(int t=0;t<c[j];t++)	cout<<"B";
		if(j==1)
			for(int t=0;t<c[j];t++)	cout<<"S";
		if(j==0)
			for(int t=0;t<c[j];t++)	cout<<p++;
	}cout<<endl;
	return 0;
} 
