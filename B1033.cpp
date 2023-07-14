#include<iostream>
#include<string.h>
using namespace std;
const int maxn=100000;

char badStr[maxn];//坏掉的按键 
char okStr[maxn];//应该输入的正常字符串 
char showStr[maxn];//显示的字符串 

int main()
{
	int i=0,j=0,k=0;
	 
	cin.getline(badStr,maxn);//gets->cin.getline
	cin.getline(okStr,maxn);
	
	i=strlen(badStr);
	j=strlen(okStr);


	//上档键坏掉——全部更换为小写
	bool flagCaps=true;//上档键默认为正常 
	for(int t=0;t<i;t++){
		if(badStr[t]=='+')
			flagCaps=false;
	} 
	if(flagCaps==false){
		for(int t=0;t<i;t++){
			if(badStr[t]>='A'&&badStr[t]<='Z'){
				int temp=badStr[t]-'A';
				badStr[t]='a'+temp;
			}	
		}
	} 

	bool flag;
	for(int t=0;t<j;t++){	
		flag=false;
		for(int s=0;s<i;s++){
			if(okStr[t]!=badStr[s])
				continue;
			else{
				flag=true;
				break;
			}
		}
		if(flagCaps==false&&okStr[t]>='A'&&okStr[t]<='Z')
			flag=true;
		if(flag==false)
			showStr[k++]=okStr[t];
	};
	
	
	if(k==0)
		cout<<endl;
	else{
		//print the result
		for(int t=0;t<k;t++)
			cout<<showStr[t];
		cout<<endl;
	}
	return 0;
}
