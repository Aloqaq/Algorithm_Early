#include<bits/stdc++.h>
using namespace std;
#define maxn 110
int N,M,num[maxn],tmp[maxn];

int main()
{
	cin>>N>>M;
	int  t=N-1,s=0; 
	for(int i=0;i<N;i++)//输入数据 
		cin>>num[i];
	for(int k=N-M;k<N;k++)//保存右边的数据 
		tmp[s++]=num[k];
	
	for(int j=N-M-1;j>=0;j--)//循环右移 
		num[t--]=num[j];
	
	for(int i=0;i<M;i++)
		num[i]=tmp[i];
	
	for(int i=0;i<N;i++){
		cout<<num[i];
		if(i<N-1)
			cout<<" ";
	}
	
	cout<<endl;
	return 0;
}
