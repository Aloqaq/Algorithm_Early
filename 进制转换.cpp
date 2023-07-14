#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	const int maxn=1010;
	int m,a[maxn];//½øÖÆ
	char ch[maxn];
	cin>>m; 
	int i,j,s=0;
	cin>>ch;
	for(i=0;ch[i]!='\0';i++){
		
		if(ch[i]=='0')	a[i]=0;
		if(ch[i]=='1')	a[i]=1;
		if(ch[i]=='2')	a[i]=2;
		if(ch[i]=='3')	a[i]=3;
		if(ch[i]=='4')	a[i]=4;
		if(ch[i]=='5')	a[i]=5;
		if(ch[i]=='6')	a[i]=6;
		if(ch[i]=='7')	a[i]=7;
		if(ch[i]=='8')	a[i]=8;
		if(ch[i]=='9')	a[i]=9;
		
	}
	for(j=0;j<i;j++){
		if(a[j]!=0){
			if(j!=0)	cout<<"+";
			cout<<a[j]<<"*"<<m<<"^"<<i-1-j;
		}
		
	}
	return 0;
 } 
