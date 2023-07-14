#include<bits/stdc++.h>
using namespace std;
#define maxn 10010
int prime[maxn],cnt=0,num;
bool flag[maxn]={false};
bool isPrime(int n)
{
	if(n<=1)return false;
	
	for(int i=2;i*i<=n;i++)
		if(n%i==0)	return false;
	return true;
} 

void find_Prim(int n)
{
	for(int i=0;i<n;i++){
		if(isPrime(i)==true){
			prime[cnt++]=i;
			flag[i]=true;
		}
	}
}
int main()
{
	//B1007素数对猜想 
	int n=0;
	cin>>num;
	find_Prim(num);//求出素数 
	for(int i=0;i<cnt;i++)
	{
		if(abs(prime[i]-prime[i+1])==2)
			n++;
	} 
	cout<<n<<endl;
	return 0;
}
