#include<bits/stdc++.h>
using namespace std;
const int maxn=10010;
int p[maxn],pNum=0;//素数表及其下标 
bool flag[maxn]={0};//质数的标记数组 ，默认是素数 
void isPrime(){//埃式筛法 
	for(int i=2;i<=maxn;i++){
		if(flag[i]==false){//如果i是素数 
			p[pNum++]=i;//把素数存到数组 
		} 
		for(int j=i+i;j<maxn;j+=i){//筛去素数的倍数 
			flag[j]=true;
		}
	}
}
int main()
{
	//哥德巴赫猜想
	int n;
	cin>>n;
	isPrime();

	for(int i=4;i<=n;i+=2){
		for(int j=0;j<pNum;j++){//素数表中取数 
			int temp=i-p[j];
			if(flag[temp]==false){
				cout<<i<<"="<<p[j]<<"+"<<temp<<endl;
				break;
			}
		}
	} 
	return 0;
 } 
