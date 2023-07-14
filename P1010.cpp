#include<bits/stdc++.h>
using namespace std;
#define maxn 2020
int p[maxn],i=0,x;
int main()
{
	while(scanf("%d",&x)!=EOF)
		p[i++]=x;
	int tmp=0;
	for(int j=0;j<i-2;j++)
	{
		if(tmp%2==0)//Å¼Êý 
			p[j]*=p[j+1];
		else{
			if(p[j]>0)
				p[j]--;
			else
				p[j]=0;
		}
		
		tmp++;
		cout<<p[j];
		if(j<i-3)	cout<<" ";
	}
	return 0;
}
