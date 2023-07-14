#include<bits/stdc++.h>
using namespace std;
#define maxn 1010

char c,s[maxn];
int t=0,num[10],tmp;

int judge(char ch){
	int a;
	a=ch-'0';
	return a;
}
int main()
{
	while(scanf("%c",&c)!=EOF){
		 s[t++]=c;
	}
	for(int i=0;i<t;i++){
		tmp=judge(s[i]);
		num[tmp]++;//对应的次数+1
	}
	for(int i=0;i<10;i++)
	{
		if(num[i]!=0)
			cout<<i<<":"<<num[i]<<endl;
	} 
	return 0;
}
