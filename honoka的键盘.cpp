#include<bits/stdc++.h>
using namespace std;
int main(){
	//honoka的键盘
	string str;
	int n;
	cin>>n;
	cin>>str;
	bool flag=false;//最多修改一个字符 
	int sum=0;
	for(int i=0;i<n;i++){
		if(str[i]=='V'&&str[i+1]=='K'){//可行
			sum++;
		
			continue; 
		} 
		if(((str[i]=='V'&&str[i+1]=='V'&&str[i+2]!='K')||(str[i]=='K'&&str[i+1]=='K'&&str[i-1]!='V'))&&flag==false){//唯一一次修改 
			sum++;
			flag=true;//修改标记 
		} 
	}
	cout<<sum;
	return 0;
}
