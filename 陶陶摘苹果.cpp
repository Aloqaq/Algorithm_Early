#include<bits/stdc++.h>
using namespace std;

const int k=10;
int n,a[k];//���ָ߶ȡ�ƻ���߶� 
int main()
{
	//����ժƻ��
	
	for(int i=0;i<10;i++){
		cin>>a[i];
	} 
	cin>>n;
	int s=0;//��ժ����ƻ������ 
	for(int i=0;i<10;i++){
		if(a[i]<=(n+30)){
			s++;
		}
	}
	cout<<s<<endl;
	return 0; 
}
