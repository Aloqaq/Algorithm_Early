#include<bits/stdc++.h>
using namespace std;
const int maxn=10010;
int p[maxn],pNum=0;//���������±� 
bool flag[maxn]={0};//�����ı������ ��Ĭ�������� 
void isPrime(){//��ʽɸ�� 
	for(int i=2;i<=maxn;i++){
		if(flag[i]==false){//���i������ 
			p[pNum++]=i;//�������浽���� 
		} 
		for(int j=i+i;j<maxn;j+=i){//ɸȥ�����ı��� 
			flag[j]=true;
		}
	}
}
int main()
{
	//��°ͺղ���
	int n;
	cin>>n;
	isPrime();

	for(int i=4;i<=n;i+=2){
		for(int j=0;j<pNum;j++){//��������ȡ�� 
			int temp=i-p[j];
			if(flag[temp]==false){
				cout<<i<<"="<<p[j]<<"+"<<temp<<endl;
				break;
			}
		}
	} 
	return 0;
 } 
