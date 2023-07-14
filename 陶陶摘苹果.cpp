#include<bits/stdc++.h>
using namespace std;

const int k=10;
int n,a[k];//伸手高度、苹果高度 
int main()
{
	//陶陶摘苹果
	
	for(int i=0;i<10;i++){
		cin>>a[i];
	} 
	cin>>n;
	int s=0;//能摘到的苹果数量 
	for(int i=0;i<10;i++){
		if(a[i]<=(n+30)){
			s++;
		}
	}
	cout<<s<<endl;
	return 0; 
}
