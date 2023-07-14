#include<bits/stdc++.h>
using namespace std;
#define maxn 110

struct Student
{
	int num;//次序 
	string m_Name;
	int m_Year;
	int m_Month;
	int m_Day;
};
Student stu[maxn];
bool cmp(Student a,Student b)
{
	if(a.m_Year!=b.m_Year)
		return a.m_Year<b.m_Year;
	else{
		if(a.m_Month!=b.m_Month)
			return a.m_Month<b.m_Month;
		else{
			if(a.m_Day!=b.m_Day)
				return a.m_Day<b.m_Day;
			else
				return a.num>b.num;
		}
	}
}

int main()
{
	int n;
	cin>>n;//总人数
	
	for(int i=0;i<n;i++)
	{
		string s;
		int y,m,d;
		cin>>s>>y>>m>>d;
		stu[i].m_Name=s;
		stu[i].m_Year=y;
		stu[i].m_Month=m;
		stu[i].m_Day=d;
		stu[i].num=i; 
	} 
	sort(stu,stu+n,cmp);
	
	for(int i=0;i<n;i++)
	{
		cout<<stu[i].m_Name<<endl;
	}
	return 0;
	
}

