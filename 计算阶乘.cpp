#include<bits/stdc++.h>
using namespace std;
int sum=1;
int cal(int n){
	if(n>1){
		sum*=n;
		n--;
		cal(n);
	}else 
		sum*=n;
	return sum;
}
int main()
{
	int n;
	cin>>n;
	int result=cal(n);
	cout<<result;
	return 0;
 } 
