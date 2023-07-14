#include<bits/stdc++.h>
using namespace std;
int main()
{
	//闰年的展示
	int n,m;
	cin>>n>>m;
	int count=0;
	int ry[1500];
	for(int i=n;i<=m;i++){
		if((i%100!=0&&i%4==0)||(i%100==0&&i%400==0)){
			ry[count]=i;
			count++;
		}
	} 
	
	cout<<count<<endl;
	for(int i=0;i<count;i++){
		cout<<ry[i]<<" ";
	}
	return 0;
}
