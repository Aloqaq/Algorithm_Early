#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;

int add(int a,int b)
{
	int c=a+b;
	return c;
}
struct node{
	int  sno;
	int grade;//学业成绩 
	int sgrade;//素质拓展成绩 
	double zgrade;//综合分数 
	int ssgrade=add(grade,sgrade);//学业成绩和素质拓展成绩的总分 
}s[maxn];

void judge(int a,double b) {
	
	if(a>140&&b>=80)	printf("Excellent\n");
	else	printf("Not excellent\n");
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].sno>>s[i].grade>>s[i].sgrade;
		s[i].zgrade=s[i].grade*0.7+s[i].sgrade*0.3;
		s[i].ssgrade=add(s[i].grade,s[i].sgrade);
	}
	for(int i=0;i<n;i++){
		judge(s[i].ssgrade,s[i].zgrade);
	} 
	return 0;
 } 
