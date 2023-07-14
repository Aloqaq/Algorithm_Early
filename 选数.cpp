#include<bits/stdc++.h>
using namespace std;
const int maxn=21;
int n,k,t,S,maxnSumSqu=-1,A[maxn],sumn[100010];//sumn为和的种类 

//temp存放临时方案，ans存放结果
vector<int>temp,ans,Sum;
//当前处理index，当前已选整数个数为nowK
//当前已选整数和为sum

bool isPrime(int n){
	if(n<=1)	return false;
	int sqr=(int)sqrt(1.0*n);
	for(int i=2;i<=sqr;i++){
		if(n%i==0)	return false;
	}
	return true;
}
void DFS(int index,int nowK,int sum){
	if(nowK==k){//找到k个数的和 
		sumn[t++]=sum;	
		return;
	}
	
	if(index==n||nowK>k)	return;
	//选index号数
	temp.push_back(A[index]);
	DFS(index+1,nowK+1,sum+A[index]);
	temp.pop_back();
	//不选index号数
	DFS(index+1,nowK,sum); 
} 

int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	DFS(0,0,0);
	for(int i=0;i<t;i++){
		if(isPrime(sumn[i])==true){
			S++;
		}
	}
	cout<<S;
	return 0;
 } 
