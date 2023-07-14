#include<bits/stdc++.h>
using namespace std;
#define maxn 100010
int N,L,H;
struct Stu{
	int Id;//准考证号 
	int Ds;//德分 
	int Cs;//才分 
	int sum;//总分 
	int level;//等级 
};
Stu s[maxn]; 
Stu s1[maxn],s2[maxn],s3[maxn],s4[maxn];
int n1=0,n2=0,n3=0,n4=0;

bool cmp(Stu a,Stu b){
	if(a.sum==b.sum){
		if(a.Ds==b.Ds)
			return a.Id<b.Id;//德分并列考号递增
		else return a.Ds>b.Ds;//总分并列得分递减 
	}
	return a.sum>b.sum;//总分降序 
}
int main()
{
	cin>>N>>L>>H;
	int t=0;//记录有效个数 
	int x,y,z,l;//临时保存 准考证号 德分 才分 等级 
	for(int i=0;i<N;i++){//输入信息 
		cin>>x>>y>>z;
		if(y>=L&&z>=L){
			if(y>=H&&z>=H)	l=4;
		else	if(y>=H&&z<H)	l=3;
		else	if(y>=z)	l=2;
		else 	l=1;
		}
		else	continue;//未及格不录取 
		s[t].Id=x;
		s[t].Ds=y;
		s[t].Cs=z;//及格则进行登记 
		s[t].level=l;
		t++;
	} 
	for(int i=0;i<t;i++){//分类成四个数组 

		if(s[i].level==1){
			s1[n1].Id=s[i].Id;
			s1[n1].Ds=s[i].Ds;
			s1[n1].Cs=s[i].Cs;
			s1[n1].level=s[i].level;
			s1[n1].sum=s1[n1].Cs+s1[n1].Ds; 
			n1++;
		}	
		if(s[i].level==2){
			s2[n2].Id=s[i].Id;
			s2[n2].Ds=s[i].Ds;
			s2[n2].Cs=s[i].Cs;
			s2[n2].level=s[i].level;
			s2[n2].sum=s2[n2].Cs+s2[n2].Ds; 
			n2++;
		}
		if(s[i].level==3){
			s3[n3].Id=s[i].Id;
			s3[n3].Ds=s[i].Ds;
			s3[n3].Cs=s[i].Cs;
			s3[n3].level=s[i].level;
			s3[n3].sum=s3[n3].Cs+s3[n3].Ds; 
			n3++;
		}if(s[i].level==4){
			s4[n4].Id=s[i].Id;
			s4[n4].Ds=s[i].Ds;
			s4[n4].Cs=s[i].Cs;
			s4[n4].level=s[i].level;
			s4[n4].sum=s4[n4].Cs+s4[n4].Ds; 
			n4++;
		}	
	}
	
	//分别排序
	sort(s1,s1+n1,cmp);
	sort(s2,s2+n2,cmp);
	sort(s3,s3+n3,cmp);
	sort(s4,s4+n4,cmp); 
	cout<<t<<endl;
	
	for(int i=0;i<n4;i++)	
	{
		cout<<s4[i].Id<<" "<<s4[i].Ds<<" "<<s4[i].Cs<<endl;	 
	}
	for(int i=0;i<n3;i++){
		cout<<s3[i].Id<<" "<<s3[i].Ds<<" "<<s3[i].Cs<<endl; 
	}
	for(int i=0;i<n2;i++){
		cout<<s2[i].Id<<" "<<s2[i].Ds<<" "<<s2[i].Cs<<endl; 	
	}
	for(int i=0;i<n1;i++){
		cout<<s1[i].Id<<" "<<s1[i].Ds<<" "<<s1[i].Cs<<endl;
	}	

	return 0;
} 
