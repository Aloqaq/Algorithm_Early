#include<bits/stdc++.h>
using namespace std;
int main(){
	//honoka�ļ���
	string str;
	int n;
	cin>>n;
	cin>>str;
	bool flag=false;//����޸�һ���ַ� 
	int sum=0;
	for(int i=0;i<n;i++){
		if(str[i]=='V'&&str[i+1]=='K'){//����
			sum++;
		
			continue; 
		} 
		if(((str[i]=='V'&&str[i+1]=='V'&&str[i+2]!='K')||(str[i]=='K'&&str[i+1]=='K'&&str[i-1]!='V'))&&flag==false){//Ψһһ���޸� 
			sum++;
			flag=true;//�޸ı�� 
		} 
	}
	cout<<sum;
	return 0;
}
