//B1045 
#include<iostream>
using namespace std;
const int maxn=100010;
typedef long long LL;
LL arr[maxn];
int N;

int main(){
	//����Ŀ������ 
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	//�ж����� 
	int count=0;
	LL ret[maxn];
	for(int i=0;i<N;i++){
		int temp=arr[i];
		bool flag=true;//Ĭ������Ԫ 
		
		//�ж�ǰ���� 
		for(int j=0;j<i;j++){
			if(arr[j]>temp){
				flag=false;
				break;	
			}	 
		}
		
		if(flag==true){
			//�жϺ󲿷� 
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
