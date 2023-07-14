#include<bits/stdc++.h>
using namespace std;

map<string, bool> z;//字符串到bool的映射 
int n,sum=0;
string a;
int main()
{
	cin>>n;

	for(int i=0;i<n;i++){//判断每个字符串的字母情况 
		cin>>a;
		sort(a.begin(),a.end());//字典序排序 
		if(z[a]==false){//没有出现过 
			sum++;
			z[a]=true;
		}
	}
	
	cout<<sum;
	return 0;
}
