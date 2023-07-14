#include<bits/stdc++.h>
using namespace std;

const int maxn=110;
string str,str0,str1,str3,str4;


int main()
{
	//文字处理软件
	int n,x,a,b;//操作的个数 ,和首个数字 
	cin>>n;
	cin>>str;//输入初始字符串
	
	for(int i=1;i<=n;i++){//操作 
		cin>>x;
		if(x==1){
			cin>>str1;
			str=str+str1;//拼接
			cout<<str<<endl; 
		}else if(x==2){
			cin>>a>>b;
			str=str.substr(a,b);
			cout<<str<<endl;	
		}else if(x==3){
			cin>>a;
			cin>>str3;
			str.insert(a,str3);//坐标从0开始 
			cout<<str<<endl;
		}else if(x==4){
			cin>>str4;
			//查找字符串
			if(str.find(str4)!=string::npos){
				cout<<str.find(str4)<<endl;
			}else{
				cout<<-1<<endl;
			}
			} 
		}

	
	return 0;
 } 
