#include<bits/stdc++.h>
using namespace std;

const int maxn=110;
string str,str0,str1,str3,str4;


int main()
{
	//���ִ������
	int n,x,a,b;//�����ĸ��� ,���׸����� 
	cin>>n;
	cin>>str;//�����ʼ�ַ���
	
	for(int i=1;i<=n;i++){//���� 
		cin>>x;
		if(x==1){
			cin>>str1;
			str=str+str1;//ƴ��
			cout<<str<<endl; 
		}else if(x==2){
			cin>>a>>b;
			str=str.substr(a,b);
			cout<<str<<endl;	
		}else if(x==3){
			cin>>a;
			cin>>str3;
			str.insert(a,str3);//�����0��ʼ 
			cout<<str<<endl;
		}else if(x==4){
			cin>>str4;
			//�����ַ���
			if(str.find(str4)!=string::npos){
				cout<<str.find(str4)<<endl;
			}else{
				cout<<-1<<endl;
			}
			} 
		}

	
	return 0;
 } 
