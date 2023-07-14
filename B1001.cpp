#include<bits/stdc++.h>
using namespace std;
int n,cnt=0;
int func(int x)
{
	if(x!=1){
		cnt++; 	
		if(x%2==0){
			x/=2;
			return func(x);
		}	
		else{
			x=(3*x+1)/2;
			return func(x);
		}
	}else
		return cnt;//º¯Êý³ö¿Ú
}
int main()
{
	//p1001
	cin>>n;
	cout<<func(n);
	return 0;
}
