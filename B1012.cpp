#include<bits/stdc++.h>
using namespace std;
#define maxn 1010
int n,num[maxn],s[5],cnt=0;
bool flag=true;
void Judge(int x)
{
	if(x%5==0&&x%2==0)
		s[0]+=x;
	else
	{
		if(x%5==1)
		{
			if(flag==true)
				s[1]+=x; 
			else
				s[1]-=x;	
			flag=!flag;
		}else if(x%5==2)
		{
			s[2]++;
		}else if(x%5==3)
		{
			cnt++;
			s[3]+=x;
		}else
		{
			if(x>s[4])
				s[4]=x;
		}
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
		Judge(num[i]);
	}
	
	for(int i=0;i<5;i++)
	{
		if(s[i]==0)	cout<<"N";
		else {
			if(i==3)	printf("%.1f",s[3]/(1.0*cnt));
			else cout<<s[i];
		}
		if(i!=4)	cout<<" ";
	}cout<<endl;
	return 0;
}
