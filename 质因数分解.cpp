#include<bits/stdc++.h>
using namespace std;
//找到最小质因数，再用原数除以即可 
const int maxn=100010; 
int prime[maxn],pNum=0;
bool is_Prime(int n){
	if(n==1)	return false;
	int sqr=(int)sqrt(1.0*n);
	for(int i=2;i<=sqr;i++){
		if(n%i==0)	return false;
	}
	return true;
}
void Find_Prime(int k)//求素数表
{
	for(int i=1;i<k;i++){
		if(is_Prime(i)==true){
			//cout<<prime[pNum]<<endl;
			prime[pNum++]=i;//存到素数表 
			
		}
	}
 } 
int main(){
	int n;
	cin>>n;
	if(n<100){
		Find_Prime(n);
	}else{
		int k=(int)sqrt(1.0*n);
		Find_Prime(k);
	}

	for(int i=0;i<=pNum;i++){
		if(n%prime[i]==0)//是因数
		{
			int j=n/prime[i];
			if(is_Prime(j)==true){//是质数返回大的 
				if(j>=prime[i]){
					cout<<j;
					break;
				}	
				else if(j<prime[i])	{
					cout<<prime[i];
					break;
				}
			}
		 } 
	} 
	return 0;
}
