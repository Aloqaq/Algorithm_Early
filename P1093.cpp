#include<bits/stdc++.h>
using namespace std;
#define maxn 310 
int num;//人数

struct stu
{
	int id;//学号 
	int a,b,c;//语文数学英语成绩
	int sum;//总分 
};
stu s[maxn]; 

class MyCmp
{
	public:
		bool operator()(stu s1,stu s2)
		{
			if(s1.sum!=s2.sum)
				return s1.sum>s2.sum;
			else{
				if(s1.a!=s2.a)
					return s1.a>s2.a;
				else
					return s1.id<s2.id;
			}
		}
};
int main()
{
	cin>>num; 
	for(int i=0;i<num;i++)
	{
		s[i].id=i+1;
		cin>>s[i].a>>s[i].b>>s[i].c;
		s[i].sum=s[i].a+s[i].b+s[i].c;
	}
	
	sort(s,s+num,MyCmp());//仿函数 
	
	for(int i=0;i<5;i++)
	{
		cout<<s[i].id<<" "<<s[i].sum<<endl;
	}
	return 0;
 } 
