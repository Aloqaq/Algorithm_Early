#include<bits/stdc++.h>
using namespace std;

//转换单词，并平方取模 
int change(string s)
{
	int temp;
	if(s=="one"||s=="a"||s=="another")	{
		temp=1;
		return temp%100;
	}	else if(s=="two"){
		temp=4;
		return temp%100;
	}	else if(s=="three"){
		temp=9;
		return temp%100;
	}	else if(s=="four"){
		temp=16;
		return temp%100;
	}	else if(s=="five"){
		temp=25;
		return temp%100;
	}	else if(s=="six"){
		temp=36;
		return temp%100;
	}	else if(s=="seven"){
		temp=49;
		return temp%100;
	}	else if(s=="eight"){
		temp=64;
		return temp%100;
	}	else if(s=="nine"){
		temp=81;
		return temp%100;
	}	else if(s=="ten"){
		temp=100;
		return temp%100;
	}	else if(s=="eleven"){
		temp=121;
		return temp%100;
	}	else if(s=="twelve"){
		temp=144;
		return temp%100;
	}	else if(s=="thirteen"){
		temp=169;
		return temp%100;
	}	else if(s=="fourteen"){
		temp=14*14;
		return temp%100;
	}	else if(s=="fifteen"){
		temp=15*15;
		return temp%100;
	}	else if(s=="sixteen"){
		temp=16*16;
		return temp%100;
	}	else if(s=="seventeen"){
		temp=17*17;
		return temp%100;
	}	else if(s=="eighteen"){
		temp=18*18;
		return temp%100;
	}	else if(s=="nineteen"){
		temp=19*19;
		return temp%100;
	}	else if(s=="twenty"){
		temp=400;
		return temp%100;
	}else{
		return 0;
	}

}
int main()
{
	
	string str;
	int num[6];
	long long sum=0;
	for(int i=0;i<6;i++)
	{
		if(i>0)	getchar();//吸收空格 
		cin>>str;
		num[i]=change(str);	
	}
	sort(num,num+6);

	sum=num[0];
	bool flag=false;//控制个位数字 
	for(int i=1;i<6;i++)
	{
		if(i!=5)
		{
			if(num[i]>0&&num[i]<10)
			{
				if(flag==true)
				{
					sum*=100;
					sum+=num[i];
				}else
				{
					if(i==4)	sum+=num[i];
					else{
						sum*=100;
						sum+=num[i];
				    	flag=true;
					}
				}
			
			}else
			{
				sum*=100;
				sum+=num[i];
			}
		}
		else{
			sum*=100;
			sum+=num[5];
		}	
	}
	cout<<sum;
	return 0;
}
