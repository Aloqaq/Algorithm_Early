#include<bits/stdc++.h>
using namespace std;

#define maxn 5050
int  m,n,k,s;

struct Person
{
	int nom;
	int score;
};
Person p[maxn];//保存选手报名号及其笔试成绩

bool cmp(Person a,Person b)
{
	if(a.score!=b.score)
		return a.score>b.score;
	else
		return a.nom<b.nom;
}


int main()
{
	cin>>n>>m;

	for(int i=0;i<n;i++)
	{
		cin>>k>>s;
		p[i].nom=k;
		p[i].score=s;
	}
	
	sort(p,p+n,cmp);
	
	int tmp=m*1.5;
	int ts=p[tmp-1].score;//分数线
	int tp=0;//复试人数 
	for(int i=0;i<n;i++)
	{
		if(ts<=p[i].score)
			tp++;
		else
			break; 
	}
	cout<<ts<<" "<<tp<<endl;
	for(int i=0;i<tp;i++)
	{
		cout<<p[i].nom<<" "<<p[i].score<<endl;
	}
	
	return 0;
 } 
