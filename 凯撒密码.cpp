#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	const int maxn=51;
	char ch[maxn];
	cin>>n>>ch;
	for(int i=0;ch[i]!='\0';i++){
		
		if(ch[i]+n>'z'){
			ch[i]='a'+n-1-('z'-ch[i]);
		} else{
			ch[i]=ch[i]+n;
		}
	}
	for(int i=0;ch[i]!='\0';i++){
		cout<<ch[i];
	} 
	return 0;
 } 
