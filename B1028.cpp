#include<bits/stdc++.h>
using namespace std;

const int maxn=100010;
struct Person{
	string name;
	int year;
	int month;
	int day;
}P[maxn];

int N;

bool cmp(Person A,Person B){//升序排列 
	if(A.year>B.year){
		return A.year<B.year;
	}else if(A.year==B.year){
		if(A.month>B.month){
			return A.month<B.month;
		}else if(A.day>B.day)
			return A.day<B.day;
	}
	return A.year<B.year;
}
int main()
{
	cin>>N;
	int num=0;
	for(int i=0;i<N;i++){
		string str;
		int y,m,d;
		cin>>str;
		cin>>y;
		getchar();
		cin>>m;
		getchar();
		cin>>d;
		//cout<<"y="<<y<<" m="<<m<<" d="<<d<<endl;
		if(2014-y>200){//超过两百岁 
			continue;
		}else if(2014-y==200){
			if(9>m)	continue;
			else if(9==m){
				if(6>d)	continue;
			}
		}
		if(y>2014){//未出生 
			continue;
		}else if(y==2014){
			if(9<m)	continue;
			else if(9==m){
				if(6<d)	continue;
			}
		}
		
		//赋值到结构体数组 
		P[num].name=str;
		//cout<<P[num].name<<endl;
		P[num].year=y;
		P[num].month=m;
		P[num].day=d;
		num++;
	}
	
	string oldEst,youEst;
	sort(P,P+num,cmp);
	youEst=P[num-1].name;
	oldEst=P[0].name;
	
	cout<<num<<" "<<oldEst<<" "<<youEst<<endl; 
	return 0;
}
