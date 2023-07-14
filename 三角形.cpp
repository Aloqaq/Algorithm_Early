#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k=1;
	cin>>n;
	for(int i=1;i<=n;i++){//输入正方形 
		for(int j=1;j<=n;j++){
			if(k<10){
				cout<<"0"<<k;
			}else{
				cout<<k;
			}
			k++;
		} cout<<endl;
	}
	k=1;
	cout<<endl;
	for(int i=1;i<=n;i++){//三角形 
		for(int j=1;j<=n;j++){
			if(j<=n-i){
				cout<<"  ";
			}else{
				if(k<10){
					cout<<"0"<<k;
				}else{
					cout<<k;
				}
				k++;	
			}
		}cout<<endl; 
	}
	return 0;
} 
