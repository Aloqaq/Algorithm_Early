#include<bits/stdc++.h>
using namespace std;

int a[10];

int main()
{
	int min=9;//选择非零的最小数
	for(int i=0;i<10;i++){
		cin>>a[i];
			
	}
	for(int i=1;i<10;i++){
		if(a[i]!=0){
			min=i;
			cout<<min;
			a[i]--;
			break;
		}		
	}

	
	for(int j=0;j<10;j++){
		
		for(int k=0;k<a[j];k++){
			cout<<j;
		}
	}
	
	
	return 0;
}
