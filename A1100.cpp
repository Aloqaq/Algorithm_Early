#include<bits/stdc++.h>
using namespace std;
#define maxn 10010
struct PersonId//�ṹ�� 
{
	string id;//���֤�� 
	int age=0;//���� 
};
PersonId PID1[maxn],PID2[maxn]; 
int maxc=99999999;//��¼������� 
int maxi;//��¼�����Ա���±� 
int main()
{
	int n,m,i=0,j=0;
	cin>>n;
	int temp=n;
	while(temp>0){//����У�������Ϣ 
		cin>>PID1[i].id;
		int ss=0;
		for(int k=0;k<18;k++)
		{
			if(k>=6&&k<=13){
				ss*=10;
				ss+=PID1[i].id[k]-'0';
			}
		}
		PID1[i].age=ss;
		//cout<<"����"<<PID1[i].age<<endl; 
		i++;
		temp--;
	}
	cin>>m;
	temp=m;
	int s,t;//����ѭ���ı��� 
	while(temp>0)//����λ���Ա��Ϣ 
	{
		cin>>PID2[j].id;
		int ss=0;
		for(int k=0;k<18;k++)
		{
			if(k>=6&&k<=13){
				ss*=10;
				ss+=PID2[j].id[k]-'0';
			}
		}
		PID2[j].age=ss;
		//cout<<"����"<<PID2[j].age<<endl; 
		
		j++;
		temp--;
	} 

	int len1,len2;//�����α� 
	int count=0;//�λ�У������ 
	for(s=0;s<n;s++){//��У�ѿ�ʼƥ�� 
		 len1=0;
		for(t=0;t<m;t++){
			len2=0;
			while(len2<18){
				if(PID1[s].id[len1]==PID2[t].id[len2]){
					//cout<<"len2="<<len2<<endl;
					if(len2==17){
						count++;//ƥ�䵽ĩβ 
						if(maxc>PID1[s].age){
							maxc=PID1[s].age;
							 
							maxi=s;//��¼�±� 
						}
					}
					len2++;//�α�2����ƶ� 
					len1++;
				}else{
					len2=0; 
					break;//ƥ��ʧ�� 
				}
			}
		}
	}
	//�������� 
	int maxu=99999999;//��¼������� 
	int maxv=0;//��¼�����Ա���±� 
	for(int l=0;l<m;l++){
		if(maxu>PID2[l].age){
			maxu=PID2[l].age;
			maxv=s;//��¼�±� 
		}
	}
	if(count){
		cout<<count<<endl
			<<PID1[maxi].id<<endl;
	}else{
		cout<<count<<endl
			<<PID2[maxv].id<<endl;
	}
	
	
	return 0;
}
