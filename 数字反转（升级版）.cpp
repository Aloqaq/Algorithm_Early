#include<bits/stdc++.h>
using namespace std;

int i,j,tmp,len=0;
const int maxn=22;
char ch[maxn],ch2[maxn],ch1[maxn],flag; 
int main()
{
	string str;
	cin>>str;
	int len=str.length();
	
	
	for(i=0;i<len;i++){//���� 
		ch[i]=str[i];
		if(ch[i]=='.'||ch[i]=='%'||ch[i]=='/'){
			tmp=i;
			flag=ch[i];//��¼���� 
		}
	}

	for(j=0;j<i;j++){//׼����ת
		if(ch[j]=='.'||ch[j]=='%'||ch[j]=='/') 
			break;
		else{
			ch1[j]=ch[j];//��¼ǰ��� 
		}
	}
	

	int k=0; 
	while(j<i){
		ch2[k++]=ch[j+1];//��¼���� 
		j++;
		//cout<<ch2[k]<<endl;
	}
	
	
	//��ת
	reverse(ch1,ch1+tmp);
	
	
	
	//���
	if(tmp==0){//���� 
		long long num=0;
		for(int t=i-1;t>=0;t--){
			//cout<<ch1[t];	
			num*=10;
			num+=(ch1[t]-'0');
		}
		cout<<num;
	}else{//�з��� 
		long long num=0;
		for(int t=0;t<tmp;t++){
			//cout<<ch1[t];
			num*=10;
			num+=(ch1[t]-'0');
		}
		cout<<num;
	} 
		
	cout<<flag;
	
	bool p=true;
	int s=0;
	for(int t=0;t<k-1;t++){
		if(ch2[t]=='0'&&p==true){//��ȥ0 
			s++;
			continue;
		} 
		p=false;
		if(p==false)
			break;
	}
	reverse(ch2,ch2+k-1);
	if(k-1-s==0)	cout<<ch2[0]; 
	
	long long numb=0;
	for(int t=0;t<k-1-s;t++){
		numb*=10;
		numb+=(ch2[t]-'0');
	}
	
	if(numb>0)	cout<<numb;
	else{
		for(int t=0;t<k-1-s;t++){
			cout<<ch2[t];
		}
	}

	system("pause");
	return 0;
}
