//B1046
#include<iostream>
using namespace std;
const int maxn=110;
int JHan[maxn],JHua[maxn],YHan[maxn],YHua[maxn];
int N;
int a,b;//甲乙两人的喝酒数 
int main(){
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>JHan[i]>>JHua[i]
		   >>YHan[i]>>YHua[i];
		if(JHua[i]==JHan[i]+YHan[i]&&YHua[i]!=JHan[i]+YHan[i])
			b++;
		else if(JHua[i]!=JHan[i]+YHan[i]&&YHua[i]==JHan[i]+YHan[i])
			a++;
		else
			continue;
	}
	cout<<a<<" "<<b<<endl;
	return 0;
}
