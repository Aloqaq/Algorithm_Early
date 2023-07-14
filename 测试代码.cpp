#include<bits/stdc++.h>
using namespace std;

const int maxn=11;
int n,P[maxn],hashTable[maxn]={false};
int num;
void generateP(int index){
	if(index==n+1){
		for(int i=1;i<=n;i++){
			cout<<P[i]<<" ";
		}cout<<endl;
    	num++;
		return;
	}
	for(int x=1;x<=n;x++){
		if(hashTable[x]==false){
			bool flag=true;
			for(int pre=1;pre<index;pre++){
				if(abs(index-pre)==abs(x-P[pre])){
					flag=false;
					break;
				}
			}
			if(flag){
				P[index]=x;
				hashTable[x]=true;
				generateP(index+1);
				hashTable[x]=false;
			}
		}
	}
}
int main(){

	cin>>n;
	generateP(n);
	cout<<num<<endl; 

	return 0;
}
