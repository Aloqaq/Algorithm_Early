#include<bits/stdc++.h>
using namespace std;

#define maxn 110//每行字符的长度
char ch1[maxn],ch2[maxn],ch3[maxn],ch4[maxn]; 
int cnt[27]={0};//统计每个字母出现的次数 


void deal(char ch[maxn])
{
	for(int j=0;ch[j]!='\n';j++)
	{
		//cout<<ch<<endl;
		if(ch[j]>='A'&&ch[j]<='Z')
		{
			//judge(ch[j]);
			cnt[ch[j]-'A']++;
		} 
	}
}
int main()
{

	//统计数字 
	gets(ch1);
	deal(ch1);
	gets(ch2);
	deal(ch2);
	gets(ch3);
	deal(ch3);
	gets(ch4);//整行输入 
	deal(ch4);
	
	
	//求最大次数
	int num=0;
	for(int i=0;i<26;i++)
	{
		if(cnt[i]>num)
			num=cnt[i];
	} 
	
	//打印
	for(int j=num;j>0;j--)
	{
		for(int i=0;i<26;i++)
		{
			if(j<=cnt[i])
				cout<<"*";
			else
				cout<<" ";
			cout<<" ";
		}cout<<endl;
	}
	char c='A';
	for(int i=0;i<26;i++)
	{
		if(c<='Z')	cout<<c<<" ";
		c++;
	}
	return 0;
}
