#include<bits/stdc++.h>
using namespace std;
string initS,realS,wrongS;
int a,b,c;//�ַ������� 
map<char,bool>mp;

int main()
{
	cin>>initS>>realS;
	a=initS.length();
	b=realS.length(); 
	c=wrongS.length();
	for(int i=0;i<26;i++){
		mp[('A'+i)]=false;
	}
	for(int i=0;i<26;i++){
		mp[('a'+i)]=false;
	}
	for(int i=0;i<9;i++){
		mp[('0'+i)]=false;
	}
	mp['_']=false;
	
	for(int i=0;i<a;i++){//init
		for(int j=0;j<b;j++){//real
			if(realS[j]==initS[i])
			{
				break;
			}else//����Ⱦͼ����ж� 
			{
				if(j==b-1){//�жϵ�ͷ 
					if(mp[initS[i]]==false){
						wrongS+=initS[i];
						mp[initS[i]]=true;
						if(initS[i]>='A'&&initS[i]<='Z'){
							mp[initS[i]+32]=true;
						}
						if(initS[i]>='a'&&initS[i]<='z'){
							mp[initS[i]-32]=true;
						}
						c++;
					}			
				} 
				continue;
			}
				
		}
	}

	for(int t=0;t<c;t++){
		if(wrongS[t]>='a'&&wrongS[t]<='z')
			wrongS[t]-=32;
	}		

    cout<<wrongS<<endl;
	return 0;
}
