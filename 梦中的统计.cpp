#include<bits/stdc++.h>
using namespace std;

int a,b,s[11];
void judge(int n){
	for(int i=0;i<=9;i++){
		if(n==i){
			s[i]++;
			break;
		}
	}
}
int main()
{
	
	cin>>a>>b;
	int i,j;
	memset(s,0,sizeof(s));
	for(i=a;i<=b;i++){
		for(j=i;j>9;j/=10){
			judge(j%10);//ÅÐ¶Ï×îµÍÎ» 
		}
		judge(j);
	}
	for(i=0;i<=9;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}
