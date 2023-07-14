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
	
	
	for(i=0;i<len;i++){//输入 
		ch[i]=str[i];
		if(ch[i]=='.'||ch[i]=='%'||ch[i]=='/'){
			tmp=i;
			flag=ch[i];//记录符号 
		}
	}

	for(j=0;j<i;j++){//准备反转
		if(ch[j]=='.'||ch[j]=='%'||ch[j]=='/') 
			break;
		else{
			ch1[j]=ch[j];//记录前半段 
		}
	}
	

	int k=0; 
	while(j<i){
		ch2[k++]=ch[j+1];//记录后半段 
		j++;
		//cout<<ch2[k]<<endl;
	}
	
	
	//反转
	reverse(ch1,ch1+tmp);
	
	
	
	//输出
	if(tmp==0){//整数 
		long long num=0;
		for(int t=i-1;t>=0;t--){
			//cout<<ch1[t];	
			num*=10;
			num+=(ch1[t]-'0');
		}
		cout<<num;
	}else{//有符号 
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
		if(ch2[t]=='0'&&p==true){//消去0 
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
