#include<bits/stdc++.h>
using namespace std;

const int MAXN=100010;
const int MOD=1000000007;//��ĿҪ�����ȡ�� 

string str;//�ַ��� _���� 

int leftNumP[MAXN]={0};//ÿһλ��ߺ�P�ĸ���
 

int main()
{
	getline(cin,str);
	int len=str.length();//����
	
	for(int i=0;i<len;i++){
		if(i>0){//�������0��λ 
			leftNumP[i]=leftNumP[i-1];//�̳���һλ�Ľ�� 
		}
		if(str[i]=='P'){
			leftNumP[i]++;
		} 
	} 
	
	int ans=0,rightNumT=0;//ansΪ��
	for(int i=len-1;i>=0;i--){
		if(str[i]=='T'){
			rightNumT++;
		}else if(str[i]=='A'){
			ans=(ans+leftNumP[i]*rightNumT)%MOD;//�ۼƳ˻� 
		}
	} 
	 
	printf("%d\n",ans);
	 
	return 0;
}
