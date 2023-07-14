#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
int n;

struct stu{
	string name;
	int a,b,c,sum;
}s[maxn];
bool cmp(stu a,stu b){
	return a.sum>b.sum;//从大到小排序 
}
int main()
{
	cin>>n;//人数
	for(int i=0;i<n;i++){
		cin>>s[i].name;
		cin>>s[i].a>>s[i].b>>s[i].c;
		s[i].sum=s[i].a+s[i].b+s[i].c;; 
	} 
	sort(s,s+n,cmp);
	cout<<s[0].name<<" "<<s[0].a<<" "<<
		s[0].b<<" "<<s[0].c;
	
	return 0;
 } 
