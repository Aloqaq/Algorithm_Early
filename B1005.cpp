#include<bits/stdc++.h>
using namespace std;
#define maxn 110
int k,s[maxn],r[maxn],t=0;
bool flag[10010]={false};

int deal(int x)
{
	if(x==1)	return 0; 
	if(x%2==0)
		x/=2;	
	else
		x=(x*3+1)/2;
	flag[x]=true;
	return deal(x);
}
int main()
{
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>s[i];
		deal(s[i]);
	}
	for(int i=k-1;i>=0;i--)
	{
		if(flag[s[i]]==false)
			r[t++]=s[i];	
	}
	for(int i=0;i<t;i++){
		cout<<r[i];
		if(i<t-1)	cout<<" ";
	}
	cout<<endl;
	return 0;
} 
