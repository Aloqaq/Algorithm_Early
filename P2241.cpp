#include<bits/stdc++.h>
using namespace std;
//��һ�� n \times mn��m ���������
//���䷽��������������Ρ������Σ������������Σ��� 
int main()
{
	long long n,m,a=0,b=0,sum=0;//���̵ĳ��������Ρ����������� ,���ε����� 
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			a+=min(i,j);
			sum+=i*j;
		}
	}
	b=sum-a;//�����ε�����=����-������ 
	cout<<a<<" "<<b;
	return 0;
}
