#include<bits/stdc++.h>
using namespace std;
const int maxn=256;
int main()
{
	string  str;
	cin>>str;
	int a=0,b=0;//�к�Ů���ĸ��� (��ó�ʼ���� 
	bool flag[maxn]={false};//���ÿһλ 
	int len=str.length();
	for(int i=0;i<len;i++){
		//�ж�boy 
		if(str[i]=='b'&&flag[i]==false){//����ĸΪy����Ҫ�ж����� 
			if(str[i+1]=='o'){
				flag[i+1]=true;
				if(str[i+2]=='y'){
					flag[i+2]=true;
				}
			} 
			a++;
		}
		if(str[i]=='o'&&flag[i]==false){
			if(str[i+1]=='y'){
				flag[i+1]=true;
			}
			a++;
		}
		if(str[i]=='y'&&flag[i]==false)	a++;
		
		
		//�ж�girl 
		if(str[i]=='g'&&flag[i]==false){
			if(str[i+1]=='i'){
				flag[i+1]=true;
				if(str[i+2]=='r'){
					flag[i+2]=true;
					if(str[i+3]=='l'){
						flag[i+3]=true;
					}
				}
			} 
			b++;
		
		}
		if(str[i]=='i'&&flag[i]==false){
			flag[i]=true;
			if(str[i+1]=='r'){
				flag[i+1]=true;
				if(str[i+2]=='l'){
					flag[i+2]=true;
				}
			}
			b++;	
		} 
		if(str[i]=='r'&&flag[i]==false){
			flag[i]=true;
			if(str[i+1]=='l'){
				flag[i+1]=true;
			}
			b++;
		}
		if(str[i]=='l'&&flag[i]==false){
			b++;
		}	
		
	}
	cout<<a<<endl
		<<b; 
	return 0;
 } 
