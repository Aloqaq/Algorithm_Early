#include<bits/stdc++.h>
using namespace std;

#define maxn 1010 //最大长度 
char  A[maxn],Q[maxn];//开辟字符数组 ,分别代表被除数和商 
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
		x=x*10+str[i]-'0';//被除数
		if(x<B){
			//if(str[i]=='0'||x==0)	
			Q[j++]='0';
			continue;
		}
		y=x/B;//获取商
		//存储商值
		Q[j++]='0'+y;
		x=x%B;//获取余数 
	}
	R=x;
	for(int i=1;i<j;i++)
	{
		cout<<Q[i];
	}
	cout<<" "<<R<<endl;
	return 0;
}

