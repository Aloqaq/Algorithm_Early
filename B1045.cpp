//B1045 
#include<iostream>
using namespace std;
const int maxn=100010;
typedef long long LL;
LL arr[maxn];
int N;

int main(){
	//输入目标内容 
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	//判断数组 
	int count=0;
	LL ret[maxn];
	for(int i=0;i<N;i++){
		int temp=arr[i];
		bool flag=true;//默认是主元 
		
		//判断前部分 
		for(int j=0;j<i;j++){
			if(arr[j]>temp){
				flag=false;
				break;	
			}	 
		}
		
		if(flag==true){
			//判断后部分 
			for(int j=i+1;j<N;j++){
				if(arr[j]<temp){
					flag=false;
					break;
				}
			}
		} 
		if(flag==true){
			ret[count]=temp;
			count++;
		}
	} 
	
	cout<<count<<endl;
	for(int i=0;i<count;i++){
		cout<<ret[i];
		if(i!=count-1)	cout<<" ";
	}cout<<endl;
	return 0;
}
