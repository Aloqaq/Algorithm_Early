#include<bits/stdc++.h>
using namespace std;

#define maxn 1010 //��󳤶� 
char  A[maxn],Q[maxn];//�����ַ����� ,�ֱ������������ 
int B,R; 
int main()
{
	string str;
	int j=0;
	cin>>str;
	int length=str.length();
	cin>>B;
	int x=0,y=0;
	for(int i=0;i<length;i++)
	{
		x=x*10+str[i]-'0';//������
		if(x<B){
			//if(str[i]=='0'||x==0)	
			Q[j++]='0';
			continue;
		}
		y=x/B;//��ȡ��
		//�洢��ֵ
		Q[j++]='0'+y;
		x=x%B;//��ȡ���� 
	}
	R=x;
	for(int i=1;i<j;i++)
	{
		cout<<Q[i];
	}
	cout<<" "<<R<<endl;
	return 0;
}

