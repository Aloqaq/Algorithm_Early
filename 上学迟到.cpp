#include<bits/stdc++.h>
using namespace std;

int main()
{
	double s,v,m;
	int n,a,t,b;
	cin>>s>>v;
	n=8*60+24*60;//�����ܹ��ķ�����
	t=ceil(s/v)+10;
	n=n-t;//�ó�ʣ�µ�ʱ�䡣
	if(n>=24*60) n-=24*60;//�ж��Ƿ���ǰһ�졣
	b=n%60;//�֡�
	a=n/60;//ʱ
	if(a<10)//�ж��Ƿ�0
	{
		if(b<10) cout<<"0"<<a<<":0"<<b;
		else cout<<"0"<<a<<":"<<b;
	}
	else
	{
		if(b<10) cout<<a<<":0"<<b;
		else cout<<a<<":"<<b;
	}
	return 0;
}
