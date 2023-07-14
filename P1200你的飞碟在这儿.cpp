#include<bits/stdc++.h>
using namespace std;

int change(string s)
{
	int len=s.length();
	int sum=1;
	for(int i=0;i<len;i++)
	{
		int temp=s[i]-'A'-0;
		temp++;
		sum*=temp;
	}
	return sum;
}

int main()
{
	string str1;
	string str2;
	cin>>str1;
	cin>>str2;
	
	int a=change(str1)%47;
	int b=change(str2)%47;

	if(a==b)
		cout<<"GO";
	else
		cout<<"STAY"; 
	return 0;
}
