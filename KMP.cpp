#include<bits/stdc++.h>
using namespace std;
const int maxn=10000010;
string str1,str2;
char ch1[maxn],ch2[maxn]; 
int nextt[maxn];
void getNext(char s[],int len){//��ⳤ��Ϊ��len���ַ���s��next����
	int j=-1;
	nextt[0]=-1 ;
	for(int i=1;i<len;i++){
		while(j!=-1&&s[i]!=s[j+1]){
			j=nextt[j];//������j=next[j] 
		}//ֱ��j���˵�-1 
		if(s[i]==s[j+1]){
			j++;
		}
		nextt[i]=j; 
	}
}
 
void KMP(char text[],char pattern[]){
	//�ַ�������
	int n=strlen(text),m=strlen(pattern);
	getNext(pattern,m);//����pattern��next���� 
	int ans=0,j=-1;//ans��ʾƥ���λ�ã���ʼ��jΪ-1,��ʾû���κ�һλ��ƥ�� 
	for(int i=0;i<n;i++){
		while(j!=-1&&text[i]!=pattern[j+1]) {
			j=nextt[j];//���� 
		}
		if(text[i]=pattern[j+1]){
			j++;
		} 
		if(j==m-1){//��ȫƥ�� 
			ans=i-m+2;
			cout<<ans<<endl;
			ans=0;//���� 
			j=nextt[j];//����ƥ�� 
		}
	} 
	return;
}
int main()
{
	cin>>ch1>>ch2;
	int len;
	int m=strlen(ch2);
	KMP(ch1,ch2);
	
	return 0;	
 } 
