#include<bits/stdc++.h>
using namespace std;

map<string, bool> z;//�ַ�����bool��ӳ�� 
int n,sum=0;
string a;
int main()
{
	cin>>n;

	for(int i=0;i<n;i++){//�ж�ÿ���ַ�������ĸ��� 
		cin>>a;
		sort(a.begin(),a.end());//�ֵ������� 
		if(z[a]==false){//û�г��ֹ� 
			sum++;
			z[a]=true;
		}
	}
	
	cout<<sum;
	return 0;
}
