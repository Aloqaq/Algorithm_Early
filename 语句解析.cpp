#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int num[3]={0};
    cin>>str;
   
    for(int i=0;i<str.length()-1;i++)   
    {
        if(str[i]=='=') {//�Ⱥŷָ� 
        	if(str[i+1]>='0'&&str[i+1]<='9')  //�Ǹ����� 
            	num[int(str[i-2])-97]=int(str[i+1]-'0');    //ֱ�Ӹ�ֵ ��s[i-2]����ð��ǰ����ĸ��-97����Ϊ'a'=97��                                
			 else   
				num[int(str[i-2])-97]=num[int(str[i+1])-97]; //�Ⱥź����ĸ��ֵ��ð��ǰ����ĸ 
		}
    }
    cout<<num[0]<<" "<<num[1]<<" "<<num[2];             //������ a,b,c; 
    return 0;
}
	 

