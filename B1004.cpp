#include<bits/stdc++.h>
using namespace std;
#define maxn 100010
int n;
struct Student{
	string name;//姓名 
	string id;//学号 
	int score;//分数 
};
Student stu[maxn];

bool cmp(Student a,Student b){
	return a.score>b.score;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].name>>stu[i].id
			>>stu[i].score;
	} 
	sort(stu,stu+n,cmp);
	cout<<stu[0].name<<" "<<stu[0].id<<endl
		<<stu[n-1].name<<" "<<stu[n-1].id;
	return 0;
} 
