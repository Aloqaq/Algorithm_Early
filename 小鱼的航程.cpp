#include<bits/stdc++.h>
using namespace std;

int main()
{
	//С��ĺ���
	int x,n,sum=0;
	cin>>x>>n;
	//�ײ�������
	int a=8-x; 
	//��������
	int b=(n-(8-x))/7 ; 
	//ĩβ�������� 
	int c=(n-(8-x))%7 ;
	if(x<=5){//�ײ�������֮�� ���ײ���+������+ĩβ���ܣ� 
		if(c<=5){
			sum=(a-2+b*5+c)*250;
		}else{//ĩβ���ܴ������� 
			sum=(a-2+b*5+5)*250;
		}	
	} else{//�ײ�������ĩ 
		a=0;//���ܹ�������
		if(c<=5){
			sum=(b*5+c)*250;
		}else{//ĩβ���ܴ������� 
			sum=(b*5+5)*250;
		}	
	}
	cout<<sum;
	return 0;
}
