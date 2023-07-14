#include<bits/stdc++.h>
using namespace std;
const int  maxn=100010;
int Student[maxn];
int Score[maxn];
int sum[maxn];
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>Student[i];
	}
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>Score[i];
	}

	//暴力搜索
	int k=0;
	for(int i=0;i<num;i++){
		for(int j=0;j<N;j++){
			if(Score[i]==Student[j])
				sum[k]++;
		}
		k++;//下一次统计
	}

	for(int i=0;i<num;i++){

		cout<<sum[i];
		if(i<num-1) cout<<" ";
	}
	cout<<endl;
	return 0;
}