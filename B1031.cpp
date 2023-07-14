#include<bits/stdc++.h>
using namespace std;
const int maxn=110;
int N;

struct node{
	string str;
	char c;
	bool flag;
}Id[maxn];

int main()
{
	cin>>N;
	string s;
	int sum=0,z=0,ret=0;
	for(int i=0;i<N;i++){
		cin>>s;
		Id[i].str=s;
		//cout<<"s="<<s<<endl;
		sum=(s[0]-'0')*7+(s[1]-'0')*9+(s[2]-'0')*10+(s[3]-'0')*5
			+(s[4]-'0')*8+(s[5]-'0')*4+(s[6]-'0')*2+(s[7]-'0')*1
			+(s[8]-'0')*6+(s[9]-'0')*3+(s[10]-'0')*7+(s[11]-'0')*9
			+(s[12]-'0')*10+(s[13]-'0')*5+(s[14]-'0')*8+(s[15]-'0')*4
			+(s[16]-'0')*2;
		//cout<<"sum="<<sum<<endl;
		z=sum%11;
		//cout<<"z="<<z<<endl;
		if(z==0)	Id[i].c='1';
		if(z==1)	Id[i].c='0';
		if(z==2)	Id[i].c='X';
		if(z==3)	Id[i].c='9';
		if(z==4)	Id[i].c='8';
		if(z==5)	Id[i].c='7';
		if(z==6)	Id[i].c='6';
		if(z==7)	Id[i].c='5';
		if(z==8)	Id[i].c='4';
		if(z==9)	Id[i].c='3';
		if(z==10)	Id[i].c='2';
		
		if(Id[i].c==s[17])	Id[i].flag=true;
		else ret++;
		//cout<<"c="<<Id[i].c<<endl;
	}
	
	if(ret==0){
		cout<<"All passed"<<endl;
		return 0;
	}
	
	//cout<<ret<<endl;
	int t=1;
	for(int i=0;i<N;i++){
		if(Id[i].flag==false){
			cout<<Id[i].str;
			if(t!=ret)	cout<<endl;
			t++;
		}
			
	}
	
	return 0;
} 
