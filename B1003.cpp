#include<bits/stdc++.h>
using namespace std;
#define maxn 110
string str;
int n,p[maxn];
bool flag=false,FL[10]={false};//Ĭ��Ϊ������ 

int cmp(string s1,string s2)
{
	int len1=s1.length();
	int len2=s2.length();

	if(len1!=len2)	return 0;
	for(int i=0;i<len1;i++)
	{
		if(s1[i]!=s2[i]){
			return 0;
		}
	}
	return 1;
}
bool deal(string st){
	int l=st.length();
	for(int i=0;i<l;i++)
	{
		if(st[i]!='A')
			return false;//���������ַ� 
		else
			return true; 
	}
}
bool judge(string s)
{
	int len=s.length();
	int a=0,b=0;
	string str1,str2,str3;//ǰ�к������ַ��� 
	bool fp1=false,fp2=false;
	for(int i=0;i<len;i++)//�ָ� 
	{
		if(s[i]=='P'&&fp1==false)	{//ֻ�޸�һ�� 
			a=i;//P��λ�� 
			fp1=true;
		}
		if(s[i]=='T'&&fp2==false){
			b=i;//T��λ�� 
			fp2=true;
		}
		
		if(s[i]!='P'&&s[i]!='A'&&s[i]!='T')	{
			flag=false;
			return false;
		} 
	}
	//if(a!=b&&a>0&&b<len)	flag=true; 
	for(int i=0;i<len;i++) 
	{
		if(i<a&&s[i]!=' ')//ǰ�벿�� 
		{
			if(s[i]!='A')	return false;
			str1+=s[i];
		}	
		if(i>a&&i<b&&s[i]!=' ')//�м䲿��
		{
			if(s[i]!='A')	return false;
			str2+=s[i];	
			if(s[i]=='A'){
				flag=true;//�м���A����� 
			}
		}
		if(i>b&&s[i]!=' ')//ĩβ���� 
		{
			if(s[i]!='A')	return false;
			str3+=s[i]; 
		}
	} 
	if(a!=0&&b!=len-1&&a!=b)//���߶�����
	{
		if(str1!=str2&&str2!=str3&&str1!=str3){//���߲���� 
			if(deal(str1)&&deal(str2)&&deal(str3)){//���߶����������ַ�
				//����str2
				string tmp;

				for(int i=0;i<str2.length()-1;i++)
				{
					tmp+=str2[i];
				}
	
				int x,y;
				x=cmp(str1,tmp);
				y=cmp(tmp,str3);
				if(x==0&&y==0){
					flag=true; 
				}
				else if(y==1||x==1) 
				{
					flag=false; 
				}
			}else
				flag=false; 
		}	
	} else if(a==0&&b!=len-1&&a!=b){//ǰ�� 
		if(str2!=str3){//����� 
			if(deal(str2)&&deal(str3)){//���������ַ� 
				flag=true;
			}else
				flag=false; 
		}
	} else if(a==0&&b!=len-1&&a!=b){//��� 
		if(str1!=str2){//����� 
			if(deal(str1)&&deal(str2)){//���������ַ� 
				flag=true;
			}else
				flag=false; 
		}
	} 
	return flag;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++) 
	{
		cin>>str;
		FL[i]=judge(str);
	}
	for(int i=0;i<n;i++)
	{
		if(FL[i]==false)	cout<<"NO";
		if(FL[i]==true)		cout<<"YES";
		if(i!=n-1)	cout<<endl;
	}
	return 0;
}
