#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int maxn=100000010;
int a,b,k=0,l=0,w[11],s[maxn];

bool isPrime(int n){//�Ƿ�Ϊ���� 
	if(n<=1)	return false;
	int sqr=(int)sqrt(1.0*n);
	for(int i=2;i<=sqr;i++){
		if(n%i==0)	return false;
	}
	return true;
} 

bool judge(int num){//�ж��Ƿ�Ϊ���� 
	int temp=num,ans=0;
	while(temp!=0){
		ans=ans*10+temp%10;
		temp/=10;
	}
	if(ans==num)	return true;
	else	return false;
}
int main()
{
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(b>1e7)	b=1e7;
		bool flag1=judge(i);
		if(flag1==true){//�ǻ��� 
			bool flag=isPrime(i);
			if(flag==true){//������ 
				s[l++]=i;
			}
		}
	}
	for(int i=0;i<l;i++){
		cout<<s[i]<<endl;
	} 
	return 0;
}


