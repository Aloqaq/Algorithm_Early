#include<bits/stdc++.h>
using namespace std;
#define maxn 1010
int a[maxn],b[maxn];//�������� 
int main()
{
	int n;
	cin>>n; 
	for(int i=0;i<n;i++)//�������� 
		cin>>a[i];
	for(int i=0;i<n-1;i++)//�����ֵ 
		b[i]=abs(a[i]-a[i+1]);
	sort(a,a+n);
	sort(b,b+n-1);
	
	bool flag=false;//��֤һ����� 
	for(int i=0;i<n-1;i++)
	{
		if(b[i]!=i+1)
		{
			cout<<"Not jolly";
			flag=true;
			break; 
		}
		else
			continue;
	 } 
	 if(flag==false)
	 	cout<<"Jolly";
	
	return 0;
}
