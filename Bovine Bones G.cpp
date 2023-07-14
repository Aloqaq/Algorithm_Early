#include<bits/stdc++.h>
using namespace std;
const int maxn=20000;
int t[maxn];
int main()
{
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	memset(t,0,sizeof(t)); 
	for(int i=1;i<=s1;i++){
		for(int j=1;j<=s2;j++){
			for(int k=1;k<=s3;k++){
				t[i+j+k]++;//入桶 并统计次数 
			}
		}
	}
	int man=t[1];
	int n=1;
	
	for(int i=2;i<=maxn;i++){
		if(t[i]>man){
			man=t[i];
			n=i;
		}	
	} 
	cout<<n;
	return 0;
}
