#include<bits/stdc++.h>
using namespace std;

int main()
{
	string result[55];//������Ϊ�ַ��� 
	int len[55];
	char a;//�洢�����
	int n,c,d;//n�洢������cd�洢����
	char s[101],b[10];//s�洢�����ַ�����b��ʱ����
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b;
		if(b[0]>='a'&&b[0]<='z'){
			a=b[0];
			cin>>c>>d;
		}else{
			sscanf(b,"%d",&c);
			cin>>d;
		}
		memset(s,0,sizeof(s));//����ַ���
		
		if(a=='a')
			sprintf(s,"%d+%d=%d",c,d,c+d);
		else if(a=='b')
			sprintf(s,"%d-%d=%d",c,d,c-d);
		else if(a=='c')
			sprintf(s,"%d*%d=%d",c,d,c*d);
		result[i]=s;//���浽�ַ������� 
		len[i]=strlen(s);
	}
	for(int i=0;i<n;i++){
		cout<<result[i]<<endl
			<<len[i]<<endl;
	}	
	return 0;
 } 
