#include<bits/stdc++.h>
using namespace std;
#define maxn 110//数字位数
char ch; 
int num=0,n[110];

int change(char c)
{
	if(c=='0')	return 0;
	if(c=='1')	return 1;
	if(c=='2')	return 2;
	if(c=='3')	return 3;
	if(c=='4')	return 4;
	if(c=='5')	return 5;
	if(c=='6')	return 6;
	if(c=='7')	return 7;
	if(c=='8')	return 8;
	if(c=='9')	return 9;
}

string trans(int x){
	if(x==0)	return "ling";
	if(x==1)	return "yi";
	if(x==2)	return "er";
	if(x==3)	return "san";
	if(x==4)	return "si";
	if(x==5)	return "wu";
	if(x==6)	return "liu";
	if(x==7)	return "qi";
	if(x==8)	return "ba";
	if(x==9)	return "jiu";
}


int main(){
	while(1)
	{
		ch=getchar();
		if(ch>='0'&&ch<='9'){
			num+=change(ch); 	
		}else
			break;
	}
	int i=0,j;
	for(i=0;num>10;i++){
		n[i]=num%10;
		num/=10;
	}
	n[i++]=num;//保存最后一位 
	for(j=i-1;j>=0;j--)
	{
		cout<<trans(n[j]);
		if(j!=0)	cout<<" ";
	}
	return 0;
} 
