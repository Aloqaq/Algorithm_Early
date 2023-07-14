#include<bits/stdc++.h>
using namespace std;
#define maxn 10000010
int prime[maxn]={0};
int num=0,x,y,cnt=0;
bool falg[maxn]={false};

bool isPrime(int n)
{
	if(n<=1)	return false;//递归出口
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)	return false;
		else continue;
	}
	return true;
}


//数素数
int main()
{
	cin>>x>>y;
	for(int i=2;num<=y;i++)
	{
		if(isPrime(i)==true){
			prime[num++]=i;
		}
		else continue;
	}
	int tmp=0;
	for(int j=x-1;j<y;j++)
	{
		if(tmp%10==0&&tmp!=0)	cout<<endl;
		cout<<prime[j]<<" ";
		tmp++;

	}cout<<endl;
	return 0;
}