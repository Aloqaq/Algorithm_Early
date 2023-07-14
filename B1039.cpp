#include<bits/stdc++.h>
using namespace std;
#define maxn 1010
//B1039
int num1=0,num2=0;//记录珠子是否缺失
char c;//每个字符 
char ch1[maxn],ch2[maxn];//输入的两个字符串
int i=0,j=0;

int main()
{
	//输入两个字符串
	bool flag=false; 
	while(scanf("%c",&c)!=EOF){
		if(c=='\n')	{
			flag=true;
			continue;
		}
	 	if(flag==false)	ch1[i++]=c; 
	 	else	ch2[j++]=c; 
	}
//	cout<<"i="<<i<<"j="<<j<<endl;
//	for(int m=0;m<i;m++)	cout<<ch1[m]<<endl;
//	
//	for(int n=0;n<j;n++)	cout<<ch2[n]<<endl;
//	
	bool isMatch=true;
	for(int s=0;s<j;s++){//从小的开始匹配 
		for(int t=0;t<i;t++)
		{

			if(ch1[t]==ch2[s]){//如果相等，移动小的下一个字符 
				num1++;
				break;
				
			}else{//如果不相等，移动大的下一个
				if(t==i-1){
					isMatch=false; 
					num2++;//记录缺失的个数 
				}	
			 	continue; 
			} 
		}
	}
	num1++;
	num2++; 
	if(isMatch==true){
		cout<<"Yes"<<" "<<num1<<endl;
	}else
		cout<<"No"<<" "<<num2<<endl;
	
	return 0;
}
