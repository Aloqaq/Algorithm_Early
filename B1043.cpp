#include<bits/stdc++.h>
using namespace std;

struct Menu{
	char ch;
	int grade;
	int times;
};
Menu menu[6];

int main()
{
	string str="PATest";
	for(int i=0;i<str.length();i++){
		menu[i].ch=str[i];
		menu[i].grade=i+1;
		menu[i].times=0;
	}
	
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		for(int j=0;j<6;j++){
			if(menu[j].ch==s[i]){
				menu[j].times++;
				break;
			}
		}
	}
	
	int minTimes=10010;
	int maxTimes=0; 
	for(int i=0;i<6;i++){
		if(minTimes>menu[i].times)
			minTimes=menu[i].times;
		if(maxTimes<menu[i].times)
			maxTimes=menu[i].times;
	}
	
//	cout<<minTimes;
//	cout<<maxTimes; 
	while(minTimes){
		cout<<"PATest";
		for(int i=0;i<6;i++){
			menu[i].times--;
		}
		minTimes--;
	}
	maxTimes=maxTimes-minTimes;
	while(maxTimes){
		for(int i=0;i<6;i++){
			if(menu[i].times){
				cout<<menu[i].ch;
				menu[i].times--;
			}
		}
		maxTimes--;
	}
	cout<<endl;
	return 0;
}
