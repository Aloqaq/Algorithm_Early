#include<bits/stdc++.h>
using namespace std;
#define maxn 1010
//B1039
int num1=0,num2=0;//��¼�����Ƿ�ȱʧ
char c;//ÿ���ַ� 
char ch1[maxn],ch2[maxn];//����������ַ���
int i=0,j=0;

int main()
{
	//���������ַ���
	bool flag=false; 
	while(scanf("%c",&c)!=EOF){
		if(c=='\n')	{
			flag=true;
			continue;
		}
	 	if(flag==false)	ch1[i++]=c; 
	 	else	ch2[j++]=c; 
	}
//	cout<<"i="<<i<<"j="<<j<<endl;
//	for(int m=0;m<i;m++)	cout<<ch1[m]<<endl;
//	
//	for(int n=0;n<j;n++)	cout<<ch2[n]<<endl;
//	
	bool isMatch=true;
	for(int s=0;s<j;s++){//��С�Ŀ�ʼƥ�� 
		for(int t=0;t<i;t++)
		{

			if(ch1[t]==ch2[s]){//�����ȣ��ƶ�С����һ���ַ� 
				num1++;
				break;
				
			}else{//�������ȣ��ƶ������һ��
				if(t==i-1){
					isMatch=false; 
					num2++;//��¼ȱʧ�ĸ��� 
				}	
			 	continue; 
			} 
		}
	}
	num1++;
	num2++; 
	if(isMatch==true){
		cout<<"Yes"<<" "<<num1<<endl;
	}else
		cout<<"No"<<" "<<num2<<endl;
	
	return 0;
}
