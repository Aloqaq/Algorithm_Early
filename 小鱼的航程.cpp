#include<bits/stdc++.h>
using namespace std;

int main()
{
	//小鱼的航程
	int x,n,sum=0;
	cin>>x>>n;
	//首残周天数
	int a=8-x; 
	//完整周数
	int b=(n-(8-x))/7 ; 
	//末尾残周天数 
	int c=(n-(8-x))%7 ;
	if(x<=5){//首残周周五之内 （首残周+完整周+末尾残周） 
		if(c<=5){
			sum=(a-2+b*5+c)*250;
		}else{//末尾残周大于周五 
			sum=(a-2+b*5+5)*250;
		}	
	} else{//首残周在周末 
		a=0;//首周工作天数
		if(c<=5){
			sum=(b*5+c)*250;
		}else{//末尾残周大于周五 
			sum=(b*5+5)*250;
		}	
	}
	cout<<sum;
	return 0;
}
