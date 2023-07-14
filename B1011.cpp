#include<bits/stdc++.h>
using namespace std;
typedef long long LL ;
LL num[11][3];
int T,tmp=0;
bool flag[11]={false};
int main()
{
	cin>>T;
	for(int i=0;i<T;i++)
	{
		for(int j=0;j<3;j++)
			cin>>num[i][j];
		if(num[i][0]+num[i][1]>num[i][2])
			flag[tmp++]=true;
		else
			flag[tmp++]=false;
	}
	for(int i=0;i<T;i++)
	{
		if(flag[i]==true)
			cout<<"Case #"<<i+1<<": true";
		else
			cout<<"Case #"<<i+1<<": false";
		cout<<endl;
	}
	
	return 0;
}
