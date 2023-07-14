#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
int a[maxn],b[maxn],c[maxn];//语文数学英语
int sum[maxn];//总分 
int n;//人数 
int main()
{
	//旗鼓相当的对手 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i]>>c[i];//输入成绩 
		sum[i]=a[i]+b[i]+c[i];
	} 
	
	int u,v,w,x;//四个绝对值 
	int count=0;//旗鼓相当的对手 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==i)	continue;//遇到自己跳过
			u=abs(a[i]-a[j]);
			v=abs(b[i]-b[j]);
		    w=abs(c[i]-c[j]);
			x=abs(sum[i]-sum[j]);
			if(u<=5&&v<=5&&w<=5&&x<=10){
				count++;
			}
		}
	}
	cout<<count/2; //相同的算了两次 
	return 0;
 } 
