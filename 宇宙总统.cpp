#include<bits/stdc++.h>
using namespace std; 
char str[101]; 

struct bign{
	int d[101];
	int len;
	int k;//���� 
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
bign compare(bign a,bign b){//�ȽϺ��� 
	if(a.len>b.len)	return a;
	else if(a.len<b.len)	return b;
	else{
		for(int i=a.len;i>=1;i--){
			if(a.d[i]>b.d[i])	return a;
			else if(a.d[i]<b.d[i])	return b;
		}
		return b;//������� 
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
	for(int i=1;i<=n;i++){//�����ַ��� 
		cin>>str;
		b[i]=change(str);//ֱ�Ӵ���ṹ�� 
		b[i].k=i; 
		
	}
	bign LMAX=b[1];
	for(int i=2;i<=n;i++){//ѡ�����ֵ 
		LMAX=compare(b[i],LMAX);
	}
	
	cout<<LMAX.k<<endl;
	print(LMAX);
	
	
	
	return 0;
 } 
