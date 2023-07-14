#include<bits/stdc++.h>
using namespace std;

int main(){
	//Davor
	int n,x,k;
	cin>>n;
	int pW=n/52;
	for(k=1;;k++){
		x=(pW-21*k)/7;
		if(x>100)	continue;
	
		if((pW-21*k)%7==0){
			cout<<x<<endl<<k;
			break;
		}else
			continue;
	}
	return 0;
} 
