#include<bits/stdc++.h>
using namespace std;

int main()
{
	//全排列的问题
	int n;
	cin>>n;
	int a[10];
	for(int i=0;i<n;i++){
		a[i]=i+1;
	} 

	do{
		for(int i=0;i<n;i++){
			printf("%5d",a[i]);
		}
		printf("\n");
	
	} while(next_permutation(a,a+n));
	return 0;
 } 
