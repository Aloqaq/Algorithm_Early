#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[13],b[13],have=0,t=0,sum1=0;
	for(int i=0;i<12;i++){//输入每月的预算 
		cin>>a[i];
	}
	for(int i=0;i<12;i++){
		if(a[i]<=(300+have)){//预算小于零花钱 
			if((have+300-a[i])/100>=1){//有整百的剩余 	
				b[t++]=(have+300-a[i])/100;
				have=(have+300-a[i])-((have+300-a[i])/100)*100;//拥有的减去给她妈的几百为剩余的 		
			}else{//没整百
				have=have+300-a[i]; 		
			} 
		}else{//超支 
			cout<<"-"<<i+1<<endl;
			return 0;
		}
	} 
	for(int i=0;i<t;i++){
		sum1+=b[i];
	}
	cout<<have+sum1*100*1.2;
	return 0;
} 
