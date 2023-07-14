#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int num[3]={0};
    cin>>str;
   
    for(int i=0;i<str.length()-1;i++)   
    {
        if(str[i]=='=') {//等号分割 
        	if(str[i+1]>='0'&&str[i+1]<='9')  //是个数字 
            	num[int(str[i-2])-97]=int(str[i+1]-'0');    //直接赋值 （s[i-2]就是冒号前的字母；-97是因为'a'=97）                                
			 else   
				num[int(str[i-2])-97]=num[int(str[i+1])-97]; //等号后的字母赋值给冒号前的字母 
		}
    }
    cout<<num[0]<<" "<<num[1]<<" "<<num[2];             //最后输出 a,b,c; 
    return 0;
}
	 

