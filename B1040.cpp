#include<bits/stdc++.h>
using namespace std;

const int MAXN=100010;
const int MOD=1000000007;//题目要求对其取余 

string str;//字符串 _定义 

int leftNumP[MAXN]={0};//每一位左边含P的个数
 

int main()
{
	getline(cin,str);
	int len=str.length();//长度
	
	for(int i=0;i<len;i++){
		if(i>0){//如果不是0号位 
			leftNumP[i]=leftNumP[i-1];//继承上一位的结果 
		}
		if(str[i]=='P'){
			leftNumP[i]++;
		} 
	} 
	
	int ans=0,rightNumT=0;//ans为答案
	for(int i=len-1;i>=0;i--){
		if(str[i]=='T'){
			rightNumT++;
		}else if(str[i]=='A'){
			ans=(ans+leftNumP[i]*rightNumT)%MOD;//累计乘积 
		}
	} 
	 
	printf("%d\n",ans);
	 
	return 0;
}
