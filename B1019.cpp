#include<bits/stdc++.h>
using namespace std;
int num,tmp;
int a[4];
void Deal(int x)
{
	for(int i=0;i<4;i++)
	{
		a[i]=x%10;
		x/=10;
	} 
	sort(a,a+4);//ÅÅÐò
	int maxn=0,minn=0;
	for(int i=3;i>=0;i--)
	{
		maxn*=10;
		maxn+=a[i];
	}
	for(int i=0;i<4;i++)
	{
		minn*=10;
		minn+=a[i];
	}
	tmp=maxn-minn;
	if(tmp==0)
	{
		if(minn<1000)
			cout<<maxn<<" - 0"<<minn<<" = "<<tmp<<endl;
		else
			cout<<maxn<<" - "<<minn<<" =0000 "<<endl;
	}else {
		if(tmp!=6174){
			if(minn<1000)
				cout<<maxn<<" - 0"<<minn<<" = "<<tmp<<endl;
			else
				cout<<maxn<<" - "<<minn<<" = "<<tmp<<endl;
			Deal(tmp);
		}else {
			if(minn<1000)
				cout<<maxn<<" - 0"<<minn<<" = "<<tmp<<endl;
			else
				cout<<maxn<<" - "<<minn<<" = "<<tmp<<endl;
			return;
		}
		
	}
}
int main()
{
	cin>>num;
	
	Deal(num);
	//²ð·ÖÊý×Ö
	return 0;
}
