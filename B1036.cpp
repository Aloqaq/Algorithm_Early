#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	char c;
	cin>>n>>c;
	int tmp;//ÐÐÊý 
	if(n%2==0)	tmp=n/2;
	else	tmp=n/2+1;
	for(int i=0;i<tmp;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0||i==tmp-1) 
				cout<<c;
			else 
				if(j==0||j==n-1)
					cout<<c;
				else
					cout<<" ";
		}cout<<endl;
	}
	return 0;
}
