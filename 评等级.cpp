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
	int grade;//ѧҵ�ɼ� 
	int sgrade;//������չ�ɼ� 
	double zgrade;//�ۺϷ��� 
	int ssgrade=add(grade,sgrade);//ѧҵ�ɼ���������չ�ɼ����ܷ� 
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
