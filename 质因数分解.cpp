#include<bits/stdc++.h>
using namespace std;
//�ҵ���С������������ԭ�����Լ��� 
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
void Find_Prime(int k)//��������
{
	for(int i=1;i<k;i++){
		if(is_Prime(i)==true){
			//cout<<prime[pNum]<<endl;
			prime[pNum++]=i;//�浽������ 
			
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
		if(n%prime[i]==0)//������
		{
			int j=n/prime[i];
			if(is_Prime(j)==true){//���������ش�� 
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
