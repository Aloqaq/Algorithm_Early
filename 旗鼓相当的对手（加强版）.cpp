#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
string str1[maxn*maxn],str2[maxn*maxn];//保存一组对手名字 
struct node{
	string name;
	int a,b,c,t;//语文数学英语成绩 
}s[maxn];
int main()
{
	int n,x,y,z;
	int u=0,v=0;//作为保存结果的自增量 
	string str; 
	cin>>n;
	for(int i=0;i<n;i++){//输入成绩 
		cin>>str;
		cin>>x>>y>>z;
		s[i].name =str;
		s[i].a =x;
		s[i].b =y;
		s[i].c =z;
		s[i].t =x+y+z;
	} 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((abs(s[i].a-s[j].a)<=5)&&(abs(s[i].b-s[j].b)<=5)&(abs(s[i].c-s[j].c)<=5)&&(abs(s[i].t-s[j].t)<=10))//如果符合，保存对手 
			{
				str1[u++]=s[i].name;
				str2[v++]=s[j].name;
			}
		}
	} 
	for(int i=0;i<u;i++){
		cout<<str1[i]<<" "
			<<str2[i]<<endl;
	}
	return 0;
}
