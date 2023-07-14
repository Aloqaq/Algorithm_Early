#include<bits/stdc++.h>
using namespace std; 
char str[101]; 

struct bign{
	int d[101];
	int len;
	int k;//次序 
	bign(){
		memset(d,0,sizeof(d));
		len=0;
	}
}b[21]; 

bign change(char str[]){
	bign a;
	a.len=strlen(str);
	for(int i=1;i<=a.len;i++){
		a.d[i]=str[a.len-i]-'0';
	}
	return a;
}
bign compare(bign a,bign b){//比较函数 
	if(a.len>b.len)	return a;
	else if(a.len<b.len)	return b;
	else{
		for(int i=a.len;i>=1;i--){
			if(a.d[i]>b.d[i])	return a;
			else if(a.d[i]<b.d[i])	return b;
		}
		return b;//两数相等 
	}
}
void print(bign a){
	for(int i=a.len;i>=1;i--){
		cout<<a.d[i];
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){//输入字符串 
		cin>>str;
		b[i]=change(str);//直接存入结构体 
		b[i].k=i; 
		
	}
	bign LMAX=b[1];
	for(int i=2;i<=n;i++){//选出最大值 
		LMAX=compare(b[i],LMAX);
	}
	
	cout<<LMAX.k<<endl;
	print(LMAX);
	
	
	
	return 0;
 } 
