#include<bits/stdc++.h>
using namespace std;
const int maxn=110;
char ch[maxn]; 
int main()
{
	//�Զ�����
	cin>>ch;

	for( int j=0;ch[j]!='\0';j++){
		if(ch[j]>='a'&&ch[j]<='z'){
			ch[j]=ch[j]-32;
		}
	}
	for( int j=0;ch[j]!='\0';j++){
			cout<<ch[j];
	}
	return 0;
	
 } 
