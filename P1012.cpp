#include<bits/stdc++.h>
using namespace std;
string str[21];



bool cmp(string a,string b)
{
	return a+b>b+a;//×Ö·û´®Æ´½Ó 
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
		
	}
	
	sort(str,str+n,cmp);
	
	for(int i=0;i<n;i++)
	{
		cout<<str[i];
	}
	return 0;
	
}
